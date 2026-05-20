#include<stdio.h>
#include<stdlib.h>

int bsearchfunc (int *arr, int n, int x) {
	int i = 0, j = n - 1;

	while(i <= j)
	{
		int mid = (i + j) / 2;

		if(arr[mid] == x) {
			return mid;
		} else if (arr[mid] > x) {
			j = mid - 1;
		} else {
			i = mid + 1;
		}
	}

	return -1;
}

int main( int argc, char *argv[]) {
	int *arr = (int *)malloc(7 * sizeof(int));

	arr[0] = 2;
	arr[1] = 11;
	arr[2] = 23;
	arr[3] = 43;
	arr[4] = 45;
	arr[5] = 66;
	arr[6] = 89;

	int hit = bsearchfunc(arr, 7, 45);

	if(hit != -1) {
		printf("found in index %d", hit);
	}
	else {
		printf("Not found");
	}

	free(arr);
	arr = NULL;

	return 0;
}
