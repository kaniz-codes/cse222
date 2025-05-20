#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Create the binary tree using user input
Node* createTree() {
    int val;
    cout << "Enter value (-1 for NULL): ";
    cin >> val;

    if (val == -1) {
        return nullptr;
    }

    Node* newNode = new Node(val);
    cout << "Enter left child of " << val << endl;
    newNode->left = createTree();

    cout << "Enter right child of " << val << endl;
    newNode->right = createTree();

    return newNode;
}

// Preorder Traversal
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder Traversal
void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Count total nodes
int countNodes(Node* root) {
    if (root == nullptr) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Count leaf nodes
int countLeafNodes(Node* root) {
    if (root == nullptr) return 0;
    if (root->left == nullptr && root->right == nullptr) return 1;
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main() {
    cout << "Binary Tree:" << endl;
    Node* root = createTree();

    cout << "\nPrefix (Preorder) Traversal: ";
    preorder(root);

    cout << "\nInfix (Inorder) Traversal: ";
    inorder(root);

    cout << "\nPostfix (Postorder) Traversal: ";
    postorder(root);

    cout << "\n\nTotal number of nodes: " << countNodes(root);
    cout << "\nTotal number of leaf nodes: " << countLeafNodes(root);

    return 0;
}
