
#ifndef STDTYPES_H_
#define STDTYPES_H_
#include <stdio.h>

typedef unsigned char          uint8 ;
typedef unsigned short int     uint16;
typedef unsigned long int      uint32;
typedef signed char            sint8 ;
typedef signed short int       sint16;
typedef signed long int        sint32;
typedef float                  sfloat32;
typedef double                 sfloat64;

typedef enum
{
	Err_OK = 0,		/* NO ERROR */
	Err_INV_IN,		/* INVALID INPUT */
	Err_INV_OP,		/* INVALID OPERATION */
	Err_GEN_NOK		/* GENERIC ERROR */
}StdErr_t;
#endif /* STDTYPES_H_ */
