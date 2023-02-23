// This is the main funtion for sum3or5
#include <stdio.h>
#include <stdlib.h>
#include "sum3or5.h"
int main(int argc, char *argv[]) {

    if (argc == 2) {
	printf("sum3or5 = %d\n", sum3or5(atoi(argv[1])));
    } else {
	printf("Please enter an argument.\n");}


}
