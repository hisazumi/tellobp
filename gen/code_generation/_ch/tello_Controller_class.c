/*----------------------------------------------------------------------------
 * File:  tello_Controller_class.c
 *
 * Class:       Controller  (Controller)
 * Component:   tello
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "tello_sys_types.h"
#include "TIM_bridge.h"
#include "tello_classes.h"

/*
 * class operation:  timer
 */
void
tello_Controller_op_timer( const i_t p_microseconds )
{
  Escher_Timer_t timer;Escher_xtUMLEvent_t * timeout;
  /* CREATE EVENT INSTANCE timeout(  ) TO CLASS */
  XTUML_OAL_STMT_TRACE( 1, "CREATE EVENT INSTANCE timeout(  ) TO CLASS" );
  timeout = Escher_NewxtUMLEvent( (void *) 0, &tello_Controller_CBevent7c );
  /* ASSIGN timer = TIM::timer_start(event_inst:timeout, microseconds:PARAM.microseconds) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN timer = TIM::timer_start(event_inst:timeout, microseconds:PARAM.microseconds)" );
  timer = TIM_timer_start( (Escher_xtUMLEvent_t *)timeout, p_microseconds );
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Controller  (Controller)
 * Component:  tello
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s tello_Controller_container[ tello_Controller_MAX_EXTENT_SIZE ];
static tello_Controller tello_Controller_instances[ tello_Controller_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_tello_Controller_extent = {
  {0}, {0}, &tello_Controller_container[ 0 ],
  (Escher_iHandle_t) &tello_Controller_instances,
  sizeof( tello_Controller ), 0, tello_Controller_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      Controller  (Controller)
 * Component:  tello
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [init]
 */
static void tello_Controller_CB_act1( tello_Controller *, const Escher_xtUMLEvent_t * const );
static void
tello_Controller_CB_act1( tello_Controller * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [connecting]
 */
static void tello_Controller_CB_act2( tello_Controller *, const Escher_xtUMLEvent_t * const );
static void
tello_Controller_CB_act2( tello_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* Controller::timer( microseconds:5000000 ) */
  XTUML_OAL_STMT_TRACE( 1, "Controller::timer( microseconds:5000000 )" );
  tello_Controller_op_timer( 5000000 );
}

/*
 * State 3:  [connected]
 */
static void tello_Controller_CB_act3( tello_Controller *, const Escher_xtUMLEvent_t * const );
static void
tello_Controller_CB_act3( tello_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* udp::send(str:takeoff) */
  XTUML_OAL_STMT_TRACE( 1, "udp::send(str:takeoff)" );
  tello_udp_send( "takeoff" );
  /* Controller::timer( microseconds:5000 ) */
  XTUML_OAL_STMT_TRACE( 1, "Controller::timer( microseconds:5000 )" );
  tello_Controller_op_timer( 5000 );
}

/*
 * State 4:  [diconnecting]
 */
static void tello_Controller_CB_act4( tello_Controller *, const Escher_xtUMLEvent_t * const );
static void
tello_Controller_CB_act4( tello_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* udp::close() */
  XTUML_OAL_STMT_TRACE( 1, "udp::close()" );
  tello_udp_close();
}

/*
 * State 5:  [flying]
 */
static void tello_Controller_CB_act5( tello_Controller *, const Escher_xtUMLEvent_t * const );
static void
tello_Controller_CB_act5( tello_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* udp::send(str:land) */
  XTUML_OAL_STMT_TRACE( 1, "udp::send(str:land)" );
  tello_udp_send( "land" );
  /* Controller::timer( microseconds:5000000 ) */
  XTUML_OAL_STMT_TRACE( 1, "Controller::timer( microseconds:5000000 )" );
  tello_Controller_op_timer( 5000000 );
}

const Escher_xtUMLEventConstant_t tello_Controller_CBevent1c = {
  tello_DOMAIN_ID, tello_Controller_CLASS_NUMBER_CB, TELLO_CONTROLLER_CBEVENT1NUM,
  ESCHER_IS_ASSIGNER_EVENT };
const Escher_xtUMLEventConstant_t tello_Controller_CBevent2c = {
  tello_DOMAIN_ID, tello_Controller_CLASS_NUMBER_CB, TELLO_CONTROLLER_CBEVENT2NUM,
  ESCHER_IS_ASSIGNER_EVENT };


const Escher_xtUMLEventConstant_t tello_Controller_CBevent5c = {
  tello_DOMAIN_ID, tello_Controller_CLASS_NUMBER_CB, TELLO_CONTROLLER_CBEVENT5NUM,
  ESCHER_IS_ASSIGNER_EVENT };
const Escher_xtUMLEventConstant_t tello_Controller_CBevent6c = {
  tello_DOMAIN_ID, tello_Controller_CLASS_NUMBER_CB, TELLO_CONTROLLER_CBEVENT6NUM,
  ESCHER_IS_ASSIGNER_EVENT };
const Escher_xtUMLEventConstant_t tello_Controller_CBevent7c = {
  tello_DOMAIN_ID, tello_Controller_CLASS_NUMBER_CB, TELLO_CONTROLLER_CBEVENT7NUM,
  ESCHER_IS_ASSIGNER_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t tello_Controller_CB_StateEventMatrix[ 5 + 1 ][ 5 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  tello_Controller_CB_STATE_1 (init) */
  { tello_Controller_CB_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 2:  tello_Controller_CB_STATE_2 (connecting) */
  { EVENT_CANT_HAPPEN, tello_Controller_CB_STATE_3, EVENT_CANT_HAPPEN, tello_Controller_CB_STATE_3, EVENT_CANT_HAPPEN },
  /* row 3:  tello_Controller_CB_STATE_3 (connected) */
  { EVENT_CANT_HAPPEN, EVENT_IS_IGNORED, EVENT_CANT_HAPPEN, tello_Controller_CB_STATE_5, EVENT_CANT_HAPPEN },
  /* row 4:  tello_Controller_CB_STATE_4 (diconnecting) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 5:  tello_Controller_CB_STATE_5 (flying) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, tello_Controller_CB_STATE_4, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t tello_Controller_CB_acts[ 6 ] = {
    (StateAction_t) 0,
    (StateAction_t) tello_Controller_CB_act1,  /* init */
    (StateAction_t) tello_Controller_CB_act2,  /* connecting */
    (StateAction_t) tello_Controller_CB_act3,  /* connected */
    (StateAction_t) tello_Controller_CB_act4,  /* diconnecting */
    (StateAction_t) tello_Controller_CB_act5  /* flying */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings_CB[ 6 ] = {
    "",
    "init",
    "connecting",
    "connected",
    "diconnecting",
    "flying"
  };

/*
 * class-based state machine event dispatching
 */
void
tello_Controller_CBDispatch( Escher_xtUMLEvent_t * event )
{
  static Escher_InstanceBase_t class_based_singleton = { tello_Controller_CB_STATE_1 };
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state = class_based_singleton.current_state;
  Escher_StateNumber_t next_state = tello_Controller_CB_StateEventMatrix[ current_state ][ event_number ];

  if ( next_state <= 5 ) {
    STATE_TXN_START_TRACE( "Controller", current_state, state_name_strings_CB[ current_state ] );
    /* Update the current state and execute the state action.  */
    class_based_singleton.current_state = next_state;
    ( *tello_Controller_CB_acts[ next_state ] )( &class_based_singleton, event );
    STATE_TXN_END_TRACE( "Controller", next_state, state_name_strings_CB[ next_state ] );
  } else {
    if ( EVENT_CANT_HAPPEN == next_state ) {
      /* Event cannot happen.  */
      UserEventCantHappenCallout( current_state, next_state, event_number );
      STATE_TXN_CH_TRACE( "Controller", current_state );
    } else if ( EVENT_IS_IGNORED == next_state ) {
      /* Event ignored */
      STATE_TXN_IG_TRACE( "Controller", current_state );
    } else {
      /* Translation/memory/stack error, etc - TBD */
    }
  }
}

