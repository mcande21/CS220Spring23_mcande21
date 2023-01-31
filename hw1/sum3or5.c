// function sum3or5
// this function returns the sum of integers less than N
// that are multiples of 3 or 5
#include <stdio.h>
int sum3or5(int n){
	int counter = 0;
	for (int i = 0; i<n ; i++){
		if (i%3 == 0 || i%5 == 0){
			counter += i;
		}
	}
return counter;

}
