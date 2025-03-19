#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a BST node
typedef struct Node {
    char data[10];
    struct Node *left, *right;
} Node;

// Function to create a new node
Node* createNode(char *data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->data, data);
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
Node* insert(Node *root, char *data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (strcmp(data, root->data) < 0) {
        root->left = insert(root->left, data);
    } else if (strcmp(data, root->data) > 0) {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to perform in-order traversal of the BST
void inorderTraversal(Node *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%s ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int n = sizeof(days) / sizeof(days[0]);

    Node *root = NULL;

    // Insert days into the BST
    for (int i = 0; i < n; i++) {
        root = insert(root, days[i]);
    }

    // Perform in-order traversal
    printf("In-order Traversal of BST:\n");
    inorderTraversal(root);

    return 0;
}