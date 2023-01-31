#include <stdio.h>
// This function will devide n/2 if n is even and 3n+1
// until n = 1. The sequence will run until n = 1 and
// will return the amount of times the sequence ran.

long long int sequence (long long int n){
	long long int counter = 1;
	while (n > 1){
	if (n%2 == 0){
		n = n/2;}
	else {
		n = 3*n+1;}
	counter ++;
} // while
return counter;
}

long long int longest () {
	long long int x = 1000000;
	long long int longest = 0;
	long long int temp = 0;
	long long int n_value = 0;
	for (long long int i = 1; i < x; i++){
		temp = sequence(i);
		if (temp > longest){
			longest = temp;
			n_value = i;
} // if statement
} // for loop
return n_value;
} // longest()

