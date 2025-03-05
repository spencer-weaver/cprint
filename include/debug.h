
#ifndef DEBUGINC
#define DEBUGINC

#include <stdio.h>
#include "color.h"
#include "pretty_print.h"

#define DEBUG_COLOR CYAN
#define ERROR_COLOR RED
#define WARNING_COLOR YELLOW

#define DEBUG 3
#define DATA 3
#define ERROR 3

#if DEBUG >= 1
    #define DEB1(msg) PRETTY_DEBUG(DEBUG_COLOR, msg, " ")
#else
    #define DEB1(msg)
#endif

#if DEBUG >= 2
    #define DEB2(msg) PRETTY_DEBUG(DEBUG_COLOR, msg, "     ")
#else
    #define DEB2(msg)
#endif

#if DEBUG >= 3
    #define DEB3(msg) PRETTY_DEBUG(DEBUG_COLOR, msg, "         ")
#else
    #define DEB3(msg)
#endif

// ERROR

#if ERROR >= 1
    #define ERR1(msg) PRETTY_ERROR(ERROR_COLOR, "error", msg)
#else
    #define ERR1(msg)
#endif

#if ERROR >= 2
    #define ERR2(msg) PRETTY_ERROR(WARNING_COLOR, "warning", msg)
#else
    #define ERR2(msg)
#endif

// DATA

#if DATA >= 1
    #define DATA1(p, data) print_##data(p)
    #define MEMBER(name, value, space) PRETTY_MEMBER(GRAY, RED, name, value, " ", space)
#else
    #define DATA1(p, data)
#endif

#endif