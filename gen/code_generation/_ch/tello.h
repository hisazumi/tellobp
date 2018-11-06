/*----------------------------------------------------------------------------
 * File:  tello.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TELLO_H
#define TELLO_H
#ifdef	__cplusplus
extern	"C"	{
#endif

#include "tello_sys_types.h"
void tello_udp_close( void );
void tello_udp_open( void );
void tello_udp_recv( c_t[ESCHER_SYS_MAX_STRING_LEN] );
void tello_udp_send( c_t[ESCHER_SYS_MAX_STRING_LEN] );

#ifdef	__cplusplus
}
#endif
#endif  /* TELLO_H */
