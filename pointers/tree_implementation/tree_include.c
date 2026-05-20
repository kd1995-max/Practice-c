#include <stdio.h>
#include <stdlib.h>

struct tree {
    int val;
    struct tree *left;
    struct tree *right;
};

typedef struct tree TREE;

TREE* create_node(int val) {
    TREE *node = (TREE *)malloc(sizeof(TREE));

    node->val = val;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void print_tree(TREE *root) {
    if (root == NULL)
        return;

    print_tree(root->left);

    printf("%d ", root->val);

    print_tree(root->right);
}

int main() {

    TREE *root = create_node(1);

    root->left = create_node(2);
    root->right = create_node(3);

    root->left->left = create_node(5);
    root->left->right = create_node(4);

    /*
            1
          /   \
         2     3
        / \
       5   4
    */

    printf("Tree (Inorder): ");
    print_tree(root);

    return 0;
}
