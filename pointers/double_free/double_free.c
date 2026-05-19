#include<stdio.h>
#include<stdlib.h>

int main () {
	int *arr = (int *)malloc(5*sizeof(int));
	free(arr);
	free(arr);

}
