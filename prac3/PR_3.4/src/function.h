#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdlib.h>


int **memory(int size);
int **overwriting(int **mass, int size);

void print_ArrayList(int **mass, int size);
void entering_ArrayList(int **mass, int size);
void entering_ArrayList_random(int **mass, int size, int min, int max);

void add(int **mass, int size, int item); //Paragraph 1
void insert(int **mass, int size, int index,int item); //Paragraph 2
void size(); //Paragraph 3
void rem(int **mass, int size, int index); //Paragraph 4
void set(int **mass, int index, int item); //Paragraph 5
void get(int **mass, int index); //Paragraph 6



#endif
