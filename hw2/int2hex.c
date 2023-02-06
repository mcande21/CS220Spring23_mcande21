/*
 * n - integer being converted
 * buff - the string that will hold the result. buff must be
 *        big enough to hold the result.
 */
#include <stdio.h>
void int2hex(unsigned int n, char buff[]) {

    int i = 0;

    while (n != 0)
    {
        int temp = 0;
        temp = n % 16;
        if (temp < 10)
        {
            buff[i] = temp + 48;
            i++;
        }
        else
        {
            buff[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", buff[j]);
    }
    printf("\n");
}
