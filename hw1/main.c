#include "hw1.h"
#include <stdio.h>

int main(){
//This is for suk3or5
    int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", sum3or5(n));

// this is for sequence
// this will also return longest sequence
    int m;
	printf("Enter a non negative number: ");
	scanf("%d", &n);
	printf("%d\n", sequence(n));
//This is for longest
    printf("longest = %d\n", longest());

// this is for daimond
    daimond();

}//main
