// This is the main function for ipow
// the function will take two command line arguments
// and it will recursvily compute the exponetial math
#include <stdio.h>
#include <stdlib.h>
#include "ipow.h"

int main (int argc, char *argv[]) {

    if (argc == 3){
	printf("%d raised to the %d power is %d.\n", atoi(argv[1]),
			atoi(argv[2]), ipow((atoi(argv[1])),(atoi(argv[2]))));
    } else {
	printf("Entered an invalid amount of arguments.\n");
    }
}
