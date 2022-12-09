#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"

float x;


int main (int argc, char* argv[]) {
    printf("\nEnter X: ");
    scanf("%f", &x);
    printf("\nf(x) = %f", f_x(x));
    printf("\ng(x) = %f\n", g_x(x));
    return 0;
}

