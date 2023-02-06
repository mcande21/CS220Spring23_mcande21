// This is the main fine for int2hex

#include <stdio.h>
extern int2hex(unsigned int n, char buff[]);

int main () {
    int n = 0;
    char buff[100];
    printf("Enter a number to conver to Hexidecimal: ");
    scanf("%d", &n);
    int2hex(n, buff); // should print 1101
}
