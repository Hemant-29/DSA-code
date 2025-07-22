#include <iostream>
using namespace std;

// Declaring the Node class
class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        this->next = NULL;
    }

    // Parametric constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        // cout << "data inside this node: " << this->data << endl;
    }
};

void printLL(Node *head)
{
    // Note: Always use a separate pointer- like 'temp' to traverse the linked list.
    // This ensures that the original 'head' pointer remains unchanged,
    // which is important if you plan to use 'head' later.
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    // Dynamic creation of new nodes
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);

    // Note:- "node1, node2, etc." are pointers to objects of the Node class (i.e., they store the address of dynamically created objects).
    cout << "Node1: " << node1 << endl;
    cout << "Node2: " << node2 << endl;
    cout << "Node3: " << node3 << endl;
    // The actual objects are stored in heap memory, and these pointers store their addresses.

    // Then we assign the "next" of each node to the next node
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // Print the node
    printLL(node1);

    return 0;
}