#ifndef FUNCTION_C
#define FUNCTION_C


//f(x)
float f_x(float x) {
    return exp(-fabs(x)) * sin(x);
}

//g(x)
float g_x(float x) {
    return exp(-fabs(x)) * cos(x);
}

#endif
