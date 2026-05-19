#include<stdio.h>
#include<stdlib.h>

int main() {
	int *arr = malloc(5 * sizeof(int));

	free(arr);
	arr=NULL;

	arr[0] = 5;

	return 0;
}
