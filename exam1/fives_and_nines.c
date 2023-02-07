// This program is going to count the total number 
// of 5's and 9's in a number given by user
#include <stdio.h>

int fives_and_nines(int n) {

    while (n != -1){
        int fives = 0;
        int nines = 0;
    for (int i = 0; i < n; i++){
	if (n%10 == 5){
	    fives++;
	    n = n/10;} // if 5
	if (n%10 == 9){
	    nines++;
	    n = n/10;} // if 9
	else{
	    n = n/10;} // if no 9 or 5
}// for statement
    return (fives + nines);
} // while statement


return 0; // while (n!=-1)

}// fivesandnines
