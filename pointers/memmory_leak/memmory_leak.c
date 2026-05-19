#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void leak() {
    int *ptr = malloc(1024 * 1024); // 1 MB leak
}

int main() {
int i = 1;
    while (i < 30) {
        leak();
	sleep(5);
	i*=2;
	printf("%d\n",i);
    }

    return 0;
}
