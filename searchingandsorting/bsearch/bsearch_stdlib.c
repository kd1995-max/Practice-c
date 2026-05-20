#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return x - y;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    int *result = bsearch(
        &key,
        arr,
        5,
        sizeof(int),
        compare
    );

    if (result != NULL)
        printf("Found: %d\n", *result);
    else
        printf("Not found\n");

    return 0;
}
