#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdlib.h>


int **memory(int size);
int **overwriting(int **mass, int size);

void print_ArrayList(int **mass, int size);
void entering_ArrayList(int **mass, int size);
void entering_ArrayList_random(int **mass, int size, int min, int max);

void SSM(int **mass, int size);//Search for the smallest mass
void rec(int **mass, int size, int index);


#endif
