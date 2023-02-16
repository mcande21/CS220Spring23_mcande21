// This program is going to count the total number 
// of 5's and 9's in a number given by user
#include <stdio.h>
#include "fives_and_nines.h"

int fives_and_nines(unsigned int n) {
    int fives = 0;
    int nines = 0;
    for (int i = 0; i < n; i++){
	if (n%10 == 5){
	    fives++;} // if 5
	if (n%10 == 9){
	    nines++;} // if 9
    n = n/10; // if no 9 or 5
}// for statement
    return (fives + nines);

}// fivesandnines
