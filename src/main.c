
#include <stdio.h>
#include <string.h>
#include "debug.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "usage: %s <input_file> <output_file>\n", argv[0]);
        return 1;
    }
}