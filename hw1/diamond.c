// This is the daimond function file. C can suck my butt
#include <stdio.h>

int daimond() {
    int n;
    int i;
    int j;
    int x;
        printf("Enter a non-negative intager: ");
        scanf("%d", &n);
	if (n < 0){
	    printf("Bye!");}
	n = n/2 + 1;
        for (j = 1; j <= n; j++)
        {
            for (i = n; i >= j; i--)
            {
                printf(" ");
            }
            for (x = 1; x <= (2 * j) - 1; x++)
            {
                printf("*");
            }
                printf("\n");
        }
	n = n*2 -1;
 	for (j = 2; j <= n - 1; j++)
            {
            for (i = 1; i <= j; i++)
            {
                printf(" ");
            }
            for (x = 2 * n - 4; x >= 2 * i - 2; x--)
            {
                printf("*");
            }
            	printf("\n");
        }
return 0;
}
// daimond()
