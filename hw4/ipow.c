// This is a recursive funtion for exponetial maths
#include <stdio.h>
#include "ipow.h"
int ipow(int x, int y) {

    if (y == 0) {
	return 1;
    } else if (y % 2 == 0) {
	return (ipow(x,y/2)) * (ipow(x,y/2));
    } else {
	return x * (ipow(x, y-1));
    }
}
