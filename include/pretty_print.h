
#ifndef PRETTY_PRINT
#define PRETTY_PRINT

#include "color.h"

// PRETTY_MEMBER_EQ(color1, color2, string, var, space1, space2)
#define PRETTY_MEMBER(color1, color2, string, var, space1, space2) \
    printf(RESET space1); \
    printf("."); \
    printf(color1 string); \
    printf(RESET space2); \
    printf("= "); \
    printf(color2 "%s", var); \
    printf(RESET "\n");

// PRETTY_DEBUG(color, string, space)
#define PRETTY_DEBUG(color, string, space) \
    printf(RESET space); \
    printf(color "-->"); \
    printf(RESET " %s\n", string);

// PRETTY_ERROR(color, string, space)
#define PRETTY_ERROR(color, string1, string2) \
    printf(color string1); \
    printf(RESET ": "); \
    printf(color "%s", string2); \
    printf(RESET "\n");

#endif