#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <winsock2.h>
#include "tello.h"

static struct sockaddr_in recv_addr, send_addr;
static int sock;

void udp_open (void) {
	// start winsock and open a socket
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2,0), &wsaData);
    sock = socket(AF_INET, SOCK_DGRAM, 0);

    // make the socket non-blocking
    u_long val=1;
    ioctlsocket(sock, FIONBIO, &val);

    // receiver
    recv_addr.sin_family = AF_INET;
    recv_addr.sin_port = htons(9000);
    recv_addr.sin_addr.s_addr = INADDR_ANY;
    bind(sock, (struct sockaddr *)&recv_addr, sizeof(recv_addr));

    // sender
    send_addr.sin_family = AF_INET;
    send_addr.sin_port = htons(8889);
    send_addr.sin_addr.s_addr = inet_addr("192.168.10.1");
}

void udp_close (void) {
    close(sock);
    WSACleanup();
}

void udp_send (const char *cmd) {
    sendto(sock, cmd, strlen(cmd), 0, (struct sockaddr *)&send_addr, sizeof(send_addr));
}

void udp_poll (void) {
    char buf[2048];
    int size;
    memset(buf, 0, sizeof(buf));
    size = recv(sock, buf, sizeof(buf), 0);
    if (size > 0) {
    	tello_udp_recv( buf );
    }
}


