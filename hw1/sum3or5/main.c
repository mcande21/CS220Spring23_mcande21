// This is the main for sum3or5
#include <stdio.h>
extern int sum3or5(int n);

int main (int argc, char *argv[]) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d", sum3or5(n));

}
