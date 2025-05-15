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

// Function to create the binary tree using user input
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

// Preorder (Prefix) Traversal
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder (Infix) Traversal
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder (Postfix) Traversal
void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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

    return 0;
}
