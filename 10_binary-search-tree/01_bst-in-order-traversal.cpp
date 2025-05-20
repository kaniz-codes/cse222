#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* left;
    Node* right;

    Node(int val) 
    {
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int val) 
{
    if (root == nullptr) 
    {
        return new Node(val);
    }

    if (val < root->data) 
    {
        root->left = insert(root->left, val);
    } else if (val > root->data) 
    {
        root->right = insert(root->right, val);
    }

    return root;
}

void inorder(Node* root) 
{
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() 
{
    Node* root = nullptr;
    int n, val;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> val;
        root = insert(root, val);
    }

    cout << "\nIn-order Traversal (Sorted): ";
    inorder(root);
    cout << endl;
    cout<< "Kaniz Fatema" << endl << "20245103154"<<endl;

    return 0;
}
