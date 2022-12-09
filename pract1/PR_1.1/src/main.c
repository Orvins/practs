#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x;

float f_x(float x);
float g_x(float x);


int main (int argc, char* argv[]) {
    printf("\nEnter X: ");
    scanf("%f", &x);
    printf("\nf(x) = %f", f_x(x));
    printf("\ng(x) = %f\n", g_x(x));
    return 0;
}


//f(x)
float f_x(float x) {
    return exp(-fabs(x)) * sin(x);
}

//g(x)
float g_x(float x) {
    return exp(-fabs(x)) * cos(x);
}
