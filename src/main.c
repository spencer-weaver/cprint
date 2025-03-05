
#include "debug.h"

int main(void) {
    MEMBER("member", "hello", "  ");
    DEB1("message");
    DEB2("message");
    ERR1("uh oh");
    ERR2("not bad");
}