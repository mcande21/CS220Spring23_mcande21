// This is the main.c funtion for ninesandfives
#include <stdio.h>
#include "fives_and_nines.h"

int main() {

    unsigned int n;
    while (n!=-1){
        printf("Number: ");
        scanf("%u", &n);
    	printf("%u\n", fives_and_nines(n));
} // while()

    printf("Goodbye.\n");

}//main()
