#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

/* Push means insert element */
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;
    printf("%d pushed\n", value);
}

/* Pop means remove top element */
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped\n", stack[top]);
    top--;
}

/* Peek means show top element */
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element = %d\n", stack[top]);
}

/* Display stack */
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}
