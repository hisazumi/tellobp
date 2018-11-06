/*----------------------------------------------------------------------------
 * File:  tello_Controller_class.h
 *
 * Class:       Controller  (Controller)
 * Component:   tello
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TELLO_CONTROLLER_CLASS_H
#define TELLO_CONTROLLER_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Controller  (Controller)
 */
struct tello_Controller {

  /* application analysis class attributes */
};
void tello_Controller_op_timer(  const i_t );


#define tello_Controller_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_tello_Controller_extent;

/*
 * class-based event:  Controller_A1:'connect'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} tello_Controller_CBevent1;
extern const Escher_xtUMLEventConstant_t tello_Controller_CBevent1c;
/*
 * class-based event:  Controller_A2:'ok'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} tello_Controller_CBevent2;
extern const Escher_xtUMLEventConstant_t tello_Controller_CBevent2c;
/*
 * class-based event:  Controller_A3:'disconnect'
 * warning:  Event is not used in application - no code generated.
 */
/*
 * class-based event:  Controller_A4:'disconnected'
 * warning:  Event is not used in application - no code generated.
 */
/*
 * class-based event:  udp::recv:'recv'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  c_t p_str[ESCHER_SYS_MAX_STRING_LEN]; /* str */
} tello_Controller_CBevent5;
extern const Escher_xtUMLEventConstant_t tello_Controller_CBevent5c;
/*
 * class-based event:  Controller_A6:'error'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} tello_Controller_CBevent6;
extern const Escher_xtUMLEventConstant_t tello_Controller_CBevent6c;
/*
 * class-based event:  Controller_A7:'timeout'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} tello_Controller_CBevent7;
extern const Escher_xtUMLEventConstant_t tello_Controller_CBevent7c;
/*
 * union of events targeted towards 'Controller' state machine
 */
typedef union {
  tello_Controller_CBevent1 controller1_1;  
  tello_Controller_CBevent2 controller2_2;  
  tello_Controller_CBevent5 controller5_3;  
  tello_Controller_CBevent6 controller6_4;  
  tello_Controller_CBevent7 controller7_5;  
} tello_Controller_CB_Events_u;
/*
 * enumeration of state model states for class
 */
#define tello_Controller_CB_STATE_1 1  /* state [1]:  (init) */
#define tello_Controller_CB_STATE_2 2  /* state [2]:  (connecting) */
#define tello_Controller_CB_STATE_3 3  /* state [3]:  (connected) */
#define tello_Controller_CB_STATE_4 4  /* state [4]:  (diconnecting) */
#define tello_Controller_CB_STATE_5 5  /* state [5]:  (flying) */
/*
 * enumeration of state model event numbers
 */
#define TELLO_CONTROLLER_CBEVENT1NUM 0  /* Controller_A1:'connect' */
#define TELLO_CONTROLLER_CBEVENT2NUM 1  /* Controller_A2:'ok' */
#define TELLO_CONTROLLER_CBEVENT6NUM 2  /* Controller_A6:'error' */
#define TELLO_CONTROLLER_CBEVENT7NUM 3  /* Controller_A7:'timeout' */
#define TELLO_CONTROLLER_CBEVENT5NUM 4  /* udp::recv:'recv' */
extern void tello_Controller_CBDispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* TELLO_CONTROLLER_CLASS_H */
