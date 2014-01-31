#ifndef _CONDUIT_BITWIDTH_STYLE_TYPES_H
#define _CONDUIT_BITWIDTH_STYLE_TYPES_H

#include "Conduit_Config.h"

///
/// Bit width annotated Style Standard Data Types
/// Derived from numpy (which provides very comprehensive support for these types)
///

/*
 * On Mac OS X, because there is only one configuration stage for all the archs
 * in universal builds, any macro which depends on the arch needs to be
 * harcoded
 */
#ifdef __APPLE__
    #undef SIZEOF_LONG
    #ifdef __LP64__
        #define SIZEOF_LONG      8
    #else
        #define SIZEOF_LONG      4
    #endif
#endif


#if SIZEOF_LONG_DOUBLE == SIZEOF_DOUBLE
        typedef double conduit_longdouble;
#else
        typedef long double conduit_longdouble;
#endif


typedef signed char     conduit_byte;
typedef unsigned char   conduit_ubyte;
typedef unsigned short  conduit_ushort;
typedef unsigned int    conduit_uint;
typedef unsigned long   conduit_ulong;

typedef char            conduit_char;
typedef short           conduit_short;
typedef int             conduit_int;
typedef long            conduit_long;
typedef float           conduit_float;
typedef double          conduit_double;


#define BITSOF_BOOL (sizeof(bool) * CHAR_BIT)
#define BITSOF_CHAR CHAR_BIT
#define BITSOF_BYTE (SIZEOF_BYTE * CHAR_BIT)
#define BITSOF_SHORT (SIZEOF_SHORT * CHAR_BIT)
#define BITSOF_INT (SIZEOF_INT * CHAR_BIT)
#define BITSOF_LONG (SIZEOF_LONG * CHAR_BIT)
#define BITSOF_LONG_LONG (SIZEOF_LONG_LONG * CHAR_BIT)
#define BITSOF_INTP (SIZEOF_INTP * CHAR_BIT)
#define BITSOF_HALF (SIZEOF_HALF * CHAR_BIT)
#define BITSOF_FLOAT (SIZEOF_FLOAT * CHAR_BIT)
#define BITSOF_DOUBLE (SIZEOF_DOUBLE * CHAR_BIT)
#define BITSOF_LONG_DOUBLE (SIZEOF_LONG_DOUBLE * CHAR_BIT)


#if BITSOF_LONG == 8
#define CONDUIT_INT8 CONDUIT_LONG
#define CONDUIT_UINT8 CONDUIT_ULONG
        typedef long conduit_int8;
        typedef unsigned long conduit_uint8;
#elif BITSOF_LONG == 16
#define CONDUIT_INT16 CONDUIT_LONG
#define CONDUIT_UINT16 CONDUIT_ULONG
        typedef long conduit_int16;
        typedef unsigned long conduit_uint16;
#elif BITSOF_LONG == 32
#define CONDUIT_INT32 CONDUIT_LONG
#define CONDUIT_UINT32 CONDUIT_ULONG
        typedef long conduit_int32;
        typedef unsigned long conduit_uint32;
#elif BITSOF_LONG == 64
#define CONDUIT_INT64 CONDUIT_LONG
#define CONDUIT_UINT64 CONDUIT_ULONG
        typedef long conduit_int64;
        typedef unsigned long conduit_uint64;
#elif BITSOF_LONG == 128
#define CONDUIT_INT128 CONDUIT_LONG
#define CONDUIT_UINT128 CONDUIT_ULONG
        typedef long conduit_int128;
        typedef unsigned long conduit_uint128;
#endif

#if BITSOF_LONG_LONG == 8
#  ifndef CONDUIT_INT8
#    define CONDUIT_INT8 CONDUIT_LONGLONG
#    define CONDUIT_UINT8 CONDUIT_ULONGLONG
        typedef conduit_longlong conduit_int8;
        typedef conduit_ulonglong conduit_uint8;
#  endif
#elif BITSOF_LONGLONG == 16
#  ifndef CONDUIT_INT16
#    define CONDUIT_INT16 CONDUIT_LONGLONG
#    define CONDUIT_UINT16 CONDUIT_ULONGLONG
        typedef conduit_longlong conduit_int16;
        typedef conduit_ulonglong conduit_uint16;
#  endif
#elif BITSOF_LONGLONG == 32
#  ifndef CONDUIT_INT32
#    define CONDUIT_INT32 CONDUIT_LONGLONG
#    define CONDUIT_UINT32 CONDUIT_ULONGLONG
        typedef conduit_longlong conduit_int32;
        typedef conduit_ulonglong conduit_uint32;
#  endif
#elif BITSOF_LONGLONG == 64
#  ifndef CONDUIT_INT64
#    define CONDUIT_INT64 CONDUIT_LONGLONG
#    define CONDUIT_UINT64 CONDUIT_ULONGLONG
        typedef conduit_longlong conduit_int64;
        typedef conduit_ulonglong conduit_uint64;
#  endif
#elif BITSOF_LONGLONG == 128
#  ifndef CONDUIT_INT128
#    define CONDUIT_INT128 CONDUIT_LONGLONG
#    define CONDUIT_UINT128 CONDUIT_ULONGLONG
        typedef conduit_longlong conduit_int128;
        typedef conduit_ulonglong conduit_uint128;
#  endif
#elif BITSOF_LONGLONG == 256
#  define CONDUIT_INT256 CONDUIT_LONGLONG
#  define CONDUIT_UINT256 CONDUIT_ULONGLONG
        typedef conduit_longlong conduit_int256;
        typedef conduit_ulonglong conduit_uint256;
#endif

#if BITSOF_INT == 8
#ifndef CONDUIT_INT8
#define CONDUIT_INT8 CONDUIT_INT
#define CONDUIT_UINT8 CONDUIT_UINT
        typedef int conduit_int8;
        typedef unsigned int conduit_uint8;
#endif
#elif CONDUIT_BITSOF_INT == 16
#ifndef CONDUIT_INT16
#define CONDUIT_INT16 CONDUIT_INT
#define CONDUIT_UINT16 CONDUIT_UINT
        typedef int conduit_int16;
        typedef unsigned int conduit_uint16;
#endif
#elif BITSOF_INT == 32
#ifndef CONDUIT_INT32
#define CONDUIT_INT32 CONDUIT_INT
#define CONDUIT_UINT32 CONDUIT_UINT
        typedef int conduit_int32;
        typedef unsigned int conduit_uint32;
#endif
#elif BITSOF_INT == 64
#ifndef CONDUIT_INT64
#define CONDUIT_INT64 CONDUIT_INT
#define CONDUIT_UINT64 CONDUIT_UINT
        typedef int conduit_int64;
        typedef unsigned int conduit_uint64;
#endif
#elif BITSOF_INT == 128
#ifndef CONDUIT_INT128
#define CONDUIT_INT128 CONDUIT_INT
#define CONDUIT_UINT128 CONDUIT_UINT
        typedef int conduit_int128;
        typedef unsigned int conduit_uint128;
#endif
#endif

#if BITSOF_SHORT == 8
#ifndef CONDUIT_INT8
#define CONDUIT_INT8 CONDUIT_SHORT
#define CONDUIT_UINT8 CONDUIT_USHORT
        typedef short conduit_int8;
        typedef unsigned short conduit_uint8;
#endif
#elif BITSOF_SHORT == 16
#ifndef CONDUIT_INT16
#define CONDUIT_INT16 CONDUIT_SHORT
#define CONDUIT_UINT16 CONDUIT_USHORT
        typedef short conduit_int16;
        typedef unsigned short conduit_uint16;
#endif
#elif BITSOF_SHORT == 32
#ifndef CONDUIT_INT32
#define CONDUIT_INT32 CONDUIT_SHORT
#define CONDUIT_UINT32 CONDUIT_USHORT
        typedef short conduit_int32;
        typedef unsigned short conduit_uint32;
        typedef unsigned short conduit_ucs4;
#endif
#elif BITSOF_SHORT == 64
#ifndef CONDUIT_INT64
#define CONDUIT_INT64 CONDUIT_SHORT
#define CONDUIT_UINT64 CONDUIT_USHORT
        typedef short conduit_int64;
        typedef unsigned short conduit_uint64;
#endif
#elif BITSOF_SHORT == 128
#ifndef CONDUIT_INT128
#define CONDUIT_INT128 CONDUIT_SHORT
#define CONDUIT_UINT128 CONDUIT_USHORT
        typedef short conduit_int128;
        typedef unsigned short conduit_uint128;
#endif
#endif


#if BITSOF_CHAR == 8
#ifndef CONDUIT_INT8
#define CONDUIT_INT8 CONDUIT_BYTE
#define CONDUIT_UINT8 CONDUIT_UBYTE
        typedef signed char conduit_int8;
        typedef unsigned char conduit_uint8;
#endif
#elif BITSOF_CHAR == 16
#ifndef CONDUIT_INT16
#define CONDUIT_INT16 CONDUIT_BYTE
#define CONDUIT_UINT16 CONDUIT_UBYTE
        typedef signed char conduit_int16;
        typedef unsigned char conduit_uint16;
#endif
#elif BITSOF_CHAR == 32
#ifndef CONDUIT_INT32
#define CONDUIT_INT32 CONDUIT_BYTE
#define CONDUIT_UINT32 CONDUIT_UBYTE
        typedef signed char conduit_int32;
        typedef unsigned char conduit_uint32;
#endif
#elif BITSOF_CHAR == 64
#ifndef CONDUIT_INT64
#define CONDUIT_INT64 CONDUIT_BYTE
#define CONDUIT_UINT64 CONDUIT_UBYTE
        typedef signed char conduit_int64;
        typedef unsigned char conduit_uint64;
#endif
#elif BITSOF_CHAR == 128
#ifndef CONDUIT_INT128
#define CONDUIT_INT128 CONDUIT_BYTE
#define CONDUIT_UINT128 CONDUIT_UBYTE
        typedef signed char conduit_int128;
        typedef unsigned char conduit_uint128;
#endif
#endif


#if BITSOF_DOUBLE == 32
#ifndef CONDUIT_FLOAT32
#define CONDUIT_FLOAT32 CONDUIT_DOUBLE
        typedef double conduit_float32;
#endif
#elif BITSOF_DOUBLE == 64
#ifndef CONDUIT_FLOAT64
#define CONDUIT_FLOAT64 CONDUIT_DOUBLE
        typedef double conduit_float64;
#endif
#elif BITSOF_DOUBLE == 80
#ifndef CONDUIT_FLOAT80
#define CONDUIT_FLOAT80 CONDUIT_DOUBLE
        typedef double conduit_float80;
#endif
#elif BITSOF_DOUBLE == 96
#ifndef CONDUIT_FLOAT96
#define CONDUIT_FLOAT96 CONDUIT_DOUBLE
        typedef double conduit_float96;
#endif
#elif BITSOF_DOUBLE == 128
#ifndef CONDUIT_FLOAT128
#define CONDUIT_FLOAT128 CONDUIT_DOUBLE
        typedef double conduit_float128;
#endif
#endif

#if BITSOF_FLOAT == 32
#ifndef CONDUIT_FLOAT32
#define CONDUIT_FLOAT32 CONDUIT_FLOAT
        typedef float conduit_float32;
#endif
#elif BITSOF_FLOAT == 64
#ifndef CONDUIT_FLOAT64
#define CONDUIT_FLOAT64 CONDUIT_FLOAT
        typedef float conduit_float64;
#endif
#elif CONDUIT_BITSOF_FLOAT == 80
#ifndef CONDUIT_FLOAT80
#define CONDUIT_FLOAT80 CONDUIT_FLOAT
        typedef float conduit_float80;
#endif
#elif BITSOF_FLOAT == 96
#ifndef CONDUIT_FLOAT96
#define CONDUIT_FLOAT96 CONDUIT_FLOAT
        typedef float conduit_float96;
#endif
#elif BITSOF_FLOAT == 128
#ifndef CONDUIT_FLOAT128
#define CONDUIT_FLOAT128 CONDUIT_FLOAT
        typedef float conduit_float128;
#endif
#endif

#if BITSOF_LONGDOUBLE == 32
#ifndef CONDUIT_FLOAT32
#define CONDUIT_FLOAT32 CONDUIT_LONGDOUBLE
        typedef conduit_longdouble conduit_float32;
#endif
#elif BITSOF_LONGDOUBLE == 64
#ifndef CONDUIT_FLOAT64
#define CONDUIT_FLOAT64 CONDUIT_LONGDOUBLE
        typedef conduit_longdouble conduit_float64;
#endif
#elif BITSOF_LONGDOUBLE == 80
#ifndef CONDUIT_FLOAT80
#define CONDUIT_FLOAT80 CONDUIT_LONGDOUBLE
        typedef conduit_longdouble conduit_float80;
#endif
#elif BITSOF_LONGDOUBLE == 96
#ifndef CONDUIT_FLOAT96
#define CONDUIT_FLOAT96 CONDUIT_LONGDOUBLE
        typedef conduit_longdouble conduit_float96;
#endif
#elif BITSOF_LONGDOUBLE == 128
#ifndef CONDUIT_FLOAT128
#define CONDUIT_FLOAT128 CONDUIT_LONGDOUBLE
        typedef conduit_longdouble conduit_float128;
#endif
#elif BITSOF_LONGDOUBLE == 256
#define CONDUIT_FLOAT256 CONDUIT_LONGDOUBLE
        typedef conduit_longdouble conduit_float256;
#endif

/* End of typedefs for numarray style bit-width names */

#endif