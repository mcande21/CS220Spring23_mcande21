// This is the main function for dow
#include <stdio.h>
#include <stdlib.h>
#include "dow.h"

int main(int argc, char *argv[]) {

    int x = 0;
    if(argc != 3) {
	int x = dow(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]));
        if(x == 5){
            printf("Monday\n");}
        if(x == 6){
            printf("Tuesday\n");}
        if(x == 0){
            printf("Wednesday\n");}
        if(x == 1){
            printf("Thursday\n");}
        if(x == 2){
            printf("Friday\n");}
        if(x == 3){
            printf("Saturday\n");}
        if(x == 4){
            printf("Sunday\n");}
	if(x >= 7){
	    printf("x = %d", x);}

    } else {
	printf("dow requries 3 arguments. Please try again.\n");}

}
