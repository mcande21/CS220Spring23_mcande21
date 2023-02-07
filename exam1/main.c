// This is the main.c funtion for ninesandfives
#include <stdio.h>
#include "fives_and_nines.h"

int main() {

    int n=0;
    while (n!=-1){
    printf("Number: ");
    scanf("%d", &n);
    if (n != -1){
    printf("%d\n", fives_and_nines(n));}
    else{
    printf("Goodbye.");}
}
}
