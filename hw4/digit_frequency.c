// This program counts the number of digits in a givin int
// It then pritns them out in a table
#include <stdio.h>
#include "digit_frequency.h"

void digit_frequency(int n, int freq[]) {
    for (int i = 0; i <= 9; i++){
	freq[i] = 0;
    }
    while (n > 0) {
	int idx = n%10;
	freq[idx]++;
	n /= 10;
    }
}

