// This is the main for cointoss

#include "cointoss.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc == 2) {
	printf("Number of heads tossed is %d\n", cointoss(atoi(argv[1])));
    } else {
	printf("Number of command line arguments is incorrect.\n");
    }
}
