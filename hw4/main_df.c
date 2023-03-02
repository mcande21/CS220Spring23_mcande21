#include <stdio.h>
#include <stdlib.h>
#include "digit_frequency.h"

int main(int argc, char *argv[]) {

    int freq[10];
    if ((atoi(argv[1])) > 2147483646){
	printf("This number is larger than max int.\n");
    } else if (argc == 2){
	digit_frequency((atoi(argv[1])), freq);
	printf("Digit          Frequency\n");
        printf("-------        ---------\n");
    	for (int i = 0; i < 10; i++) {
            printf("%d             %d\n", i, freq[i]);}
    } else {
	printf("please add more or less arguments.");
    }
}
