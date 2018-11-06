/*----------------------------------------------------------------------------
 * File:  tello_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  tello
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TELLO_CLASSES_H
#define TELLO_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  tello
 */
extern Escher_Extent_t * const tello_class_info[];
extern const EventTaker_t tello_EventDispatcher[];
void tello_execute_initialization( void );

#define tello_STATE_MODELS 2
/* Define constants to map to class numbers.  */
#define tello_Controller_CLASS_NUMBER 0
#define tello_Controller_CLASS_NUMBER_CB 1
#define tello_MAX_CLASS_NUMBERS 2

/* Provide a map of classes to task numbers.  */
#define tello_TASK_NUMBERS  0, 0

#define tello_class_dispatchers\
  0,\
  tello_Controller_CBDispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct tello_Controller tello_Controller;

/* union of class declarations so we may derive largest class size */
#define tello_CLASS_U \
  char tello_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void tello_recv( c_t[ESCHER_SYS_MAX_STRING_LEN] );
void tello_setup( void );

#include "TIM_bridge.h"
#include "tello.h"
#include "tello_Controller_class.h"
/*
 * roll-up of all events (with their parameters) for component tello
 */
typedef union {
  tello_Controller_CB_Events_u tello_Controller_CB_Events_u_namespace;
} tello_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* TELLO_CLASSES_H */
