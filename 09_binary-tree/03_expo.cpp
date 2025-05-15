#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = right = nullptr;
    }
};

TreeNode* insertNode(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void inOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

void freeTree(TreeNode* root) {
    if (root != nullptr) {
        freeTree(root->left);
        freeTree(root->right);
        delete root;
    }
}

int main() {
    TreeNode* root = nullptr;
    int nodeValue;

    cout << "Enter values to insert into the binary tree (enter -1 to stop):" << endl;

    while (true) {
        cin >> nodeValue;
        if (nodeValue == -1) break;
        root = insertNode(root, nodeValue);
    }

    cout << "\nIn-order Traversal of the Binary Tree: ";
    inOrderTraversal(root);
    cout << endl;

    freeTree(root);
    return 0;
}
