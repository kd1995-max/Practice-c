#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Create new node */
struct node* create_node(int value) {
    struct node *newnode = malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newnode->data = value;
    newnode->next = NULL;

    return newnode;
}

/* Insert at end */
void insert_end(int value) {
    struct node *newnode = create_node(value);

    if (head == NULL) {
        head = newnode;
        return;
    }

    struct node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
}

/* Insert at beginning */
void insert_begin(int value) {
    struct node *newnode = create_node(value);

    newnode->next = head;
    head = newnode;
}

/* Delete first node */
void delete_begin() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;
    head = head->next;

    printf("%d deleted\n", temp->data);
    free(temp);
}

/* Print linked list */
void print_list() {
    struct node *temp = head;

    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);

    print_list();

    insert_begin(5);

    print_list();

    delete_begin();

    print_list();

    return 0;
}
