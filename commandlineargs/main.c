#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    char *end = NULL;
    int a = strtol(argv[1], &end, 10);
    if (*end != '\0') {
	    printf("Invalid number\n");
	    return 1;
    }
    end = NULL;
    int b = strtol(argv[2], &end, 10);
    if (*end != '\0') {
	    printf("Invalid number\n");
	    return 1;
    }
    printf("sum is %d\n", a + b);

    return 0;
}
