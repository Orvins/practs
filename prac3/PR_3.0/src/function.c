#ifndef FUNCTION_C
#define FUNCTION_C
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



int **memory(int size){
    float **arr = (int **) malloc(size * sizeof(int*));
    return arr;
}


int **overwriting(int **mass, int size) {
	int **arr = (int **)realloc(mass, (size + 1) * sizeof(int*));
	return arr;
}



void entering_ArrayList(int **mass, int size) {
	int i;
	printf("\n  Enter array values:\n");
	for (i = 0; i < size; i++) {
		scanf("%s", &mass[i]);
	}
}


void entering_ArrayList_random(int **mass, int size, int min, int max) {
	int i;
	for(i = 0; i < size; i++){
		mass[i]= rand() % (max - min + 1) + min;
	}
}


void print_ArrayList(int **mass, int size) {
	int i;
	printf("\n\n  [");
	for(i = 0; i < size; i++){
		printf("%d\t", mass[i]);
	}
	printf("]\n\n\n");
}


void SSM(int **mass, int size) {
	int i, min, max = 0;
	int summ;
	min = mass[0];
	for(i = 0; i < size; i++) {
		if (mass[i]<= min) {
			min = i;
		}
		if (mass[i] >= max) {
			max = i;
		}
	}
	//printf("min = %d, max = %d\t", min, max);




}

void rec(int **mass, int size, int index, int num) {
	if (num == 0) {
		return 1;
	} else {

	}
}



#endif
