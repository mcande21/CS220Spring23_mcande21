// This is the c program for myexp
#include <limits.h>

double myexp(double x) {

    double k = 1.0;
    double total = 1.0;
    while (k <= 12) {
	double pow = x;
	double fact = k;
	int i = k-1;
	while (i > 0) {
	    pow = pow * x;
	    fact = fact * i;
	    i--;
	}
	total = total + (pow / fact);
	k++;
    }

    return total;
}
