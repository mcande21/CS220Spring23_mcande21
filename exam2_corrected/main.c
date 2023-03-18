// This is the main for cointoss

#include "cointoss.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/random.h>

int main(int argc, char *argv[]) {

    char buff[4];       // hold random bits
    // have seed point to buff as an unsigned int
    unsigned int *seed = (unsigned int *) buff;
    getrandom(buff, 4, 0);
    srand(*seed);

    if (argc == 2) {
	printf("Number of heads tossed is %d\n", cointoss(atoi(argv[1])));
    } else {
	printf("Number of command line arguments is incorrect.\n");
    }
}
