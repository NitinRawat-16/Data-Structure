#include <iostream>
using namespace std;

struct Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Inorder Traverse
void displayInorder(Node *head) {
    if(head == nullptr) 
        return;
    displayInorder(head->left);
    cout << head->data << " ";
    displayInorder(head->right);
}
// Preorder Traverse
void displayPreorder(Node *head) {
    if(head == nullptr) 
        return;
    cout << head->data << " ";
    displayPreorder(head->left);
    displayPreorder(head->right);
}

auto main() -> int
{
    Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    displayPreorder(head);
    
}