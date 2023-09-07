#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} node;

node *createNode(int data) {
    node *newNode = (node *) malloc(sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

node *insertNode(node *root, int parent, int child, char side) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == parent) {
        if (side == 'L') {
            root->left = createNode(child);
        } else if (side == 'R') {
            root->right = createNode(child);
        }
        return root;
    }
    insertNode(root->left, parent, child, side);
    insertNode(root->right, parent, child, side);
    return root;
}

int isBST(node *root) {
    if (root == NULL) {
        return 1;
    }
    if (root->left != NULL && root->left->data > root->data) {
        return 0;
    }
    if (root->right != NULL && root->right->data < root->data) {
        return 0;
    }
    if (!isBST(root->left) || !isBST(root->right)) {
        return 0;
    }
    return 1;
}

int checkDuplicate(node *root, int data) {
    if (root == NULL) {
        return 0;
    }
    if (root->data == data) {
        return 1;
    }
    return checkDuplicate(root->left, data) || checkDuplicate(root->right, data);
}

int checkCannotRecieveMoreNodes(node *root, int parent, int child, char side) {
    if (root == NULL) {
        return 0;
    }
    if (root->data == parent) {
        if (side == 'L') {
            if (root->left != NULL) {
                return 1;
            }
        } else if (side == 'R') {
            if (root->right != NULL) {
                return 1;
            }
        }
        return 0;
    }
    return checkCannotRecieveMoreNodes(root->left, parent, child, side) || checkCannotRecieveMoreNodes(root->right, parent, child, side);
}

int main() {
    int rootData;
    scanf("%d", &rootData);
    node *root = createNode(rootData);
    int parent, child;
    char side;
    while (1) {
        scanf("%d %d %c", &parent, &child, &side);
        if (parent == 0 && child == 0) {
            break;
        }
        if (checkDuplicate(root, child)) {
            printf("Not what I am looking for, I am afraid.");
            return 0;
        }
        if (checkCannotRecieveMoreNodes(root, parent, child, side)) {
            printf("Not what I am looking for, I am afraid.");
            return 0;
        }
        insertNode(root, parent, child, side);
    }
    if (root->left == NULL && root->right == NULL) {
        printf("This tree is lonely, give them a hug.");
    } else if (isBST(root)) {
        printf("A binary search tree, this is.");
    } else {
        printf("This tree is illegal.");
    }
    return 0;
}