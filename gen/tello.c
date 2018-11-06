/*----------------------------------------------------------------------------
 * File:  tello.c
 *
 * UML Component Port Messages
 * Component/Module Name:  tello
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "tello_sys_types.h"
#include "tello.h"
#include "TIM_bridge.h"
#include "tello_classes.h"
#include "udp.h"

/*
 * Interface:  udp
 * Required Port:  udp
 * To Provider Message:  close
 */
void
tello_udp_close()
{
	udp_close();
}

/*
 * Interface:  udp
 * Required Port:  udp
 * To Provider Message:  open
 */
void
tello_udp_open()
{
	udp_open();
}

/*
 * Interface:  udp
 * Required Port:  udp
 * From Provider Message:  recv
 */
void
tello_udp_recv( c_t p_str[ESCHER_SYS_MAX_STRING_LEN] )
{
  /* ::recv( str:PARAM.str ) */
  XTUML_OAL_STMT_TRACE( 1, "::recv( str:PARAM.str )" );
  tello_recv( p_str );
  { tello_Controller_CBevent5 * e = (tello_Controller_CBevent5 *) Escher_NewxtUMLEvent( (void *) 0, &tello_Controller_CBevent5c );
    Escher_strcpy( e->p_str, p_str );
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }
}

/*
 * Interface:  udp
 * Required Port:  udp
 * To Provider Message:  send
 */
void
tello_udp_send( c_t p_str[ESCHER_SYS_MAX_STRING_LEN] )
{
	udp_send(p_str);
}
/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  recv
 */
void
tello_recv( c_t p_str[ESCHER_SYS_MAX_STRING_LEN] )
{
  tello_Controller * controller=0;
  /* SELECT any controller FROM INSTANCES OF Controller */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any controller FROM INSTANCES OF Controller" );
  controller = (tello_Controller *) Escher_SetGetAny( &pG_tello_Controller_extent.active );
  /* IF ( PARAM.str == ok ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( PARAM.str == ok )" );
  if ( Escher_strcmp( p_str, "ok" ) == 0 ) {
    /* GENERATE Controller_A2:ok() TO Controller CLASS */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE Controller_A2:ok() TO Controller CLASS" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( 0, &tello_Controller_CBevent2c );
      Escher_SendEvent( e );
    }
  }
  else if ( Escher_strcmp( p_str, "error" ) == 0 ) {
    /* GENERATE Controller_A6:error() TO Controller CLASS */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE Controller_A6:error() TO Controller CLASS" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( 0, &tello_Controller_CBevent6c );
      Escher_SendEvent( e );
    }
  }
}

/*
 * Domain Function:  setup
 */
void
tello_setup()
{
  tello_Controller * controller;
  /* CREATE OBJECT INSTANCE controller OF Controller */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE controller OF Controller" );
  controller = (tello_Controller *) Escher_CreateInstance( tello_DOMAIN_ID, tello_Controller_CLASS_NUMBER );
  /* GENERATE Controller_A1:connect() TO Controller CLASS */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Controller_A1:connect() TO Controller CLASS" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( 0, &tello_Controller_CBevent1c );
    Escher_SendEvent( e );
  }
}
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const tello_class_info[ tello_MAX_CLASS_NUMBERS ] = {
  &pG_tello_Controller_extent,
  0
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t tello_EventDispatcher[ tello_STATE_MODELS ] = {
  tello_class_dispatchers
};

void tello_execute_initialization()
{
  /*
   * Initialization Function:  setup
   * Component:  tello
   */
  tello_setup();

}
