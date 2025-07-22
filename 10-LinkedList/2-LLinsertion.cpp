#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node* next;

  // Default constructor
  Node() { this->next = NULL; }

  // Parameterised constructor
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void printLL(Node* head) {
  // This prints the Linked List
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

// NOTE:- Always take the head, tail object pointers as reference
void insertAtHead(Node*& head, Node*& tail, int data) {
  // Edge case: When the given LinkedList is empty
  if (head == NULL) {
    // Make a new Node
    Node* newNode = new Node(data);

    // point the head to the new Node
    head = newNode;

    // Point the tail to the new Node
    tail = newNode;
  } else {
    // Make a new Node
    Node* newNode = new Node(data);

    // Point the new Node's next to the current head
    newNode->next = head;

    // assign head to the new Node
    head = newNode;
  }
}

// NOTE:- Always take the tail object pointer as reference
void insertAtTail(Node*& head, Node*& tail, int data) {
  // Edge case: When the given LinkedList is empty
  if (tail == NULL) {
    // Make a new Node
    Node* newNode = new Node(data);

    // point the tail to the new Node
    tail = newNode;

    // Also point the head to the new Node
    head = newNode;
  } else {
    // Make a new Node
    Node* newNode = new Node(data);

    // Point the tail's next to the new Node
    tail->next = newNode;

    // assign tail to the new Node
    tail = newNode;
  }
}

int main() {
  // This is the manual way to create a LL, we don't use it generally
  Node* node1 = new Node(5);
  Node* node2 = new Node(8);
  Node* node3 = new Node(12);
  node1->next = node2;
  node2->next = node3;
  Node* head = node1;
  Node* tail = node3;

  // Print the initial Linked list
  printLL(head);

  // Inserting data at the head and the tail of linked list
  insertAtHead(head, 1);

  // Inserting data at the tail of the Linked list
  insertAtTail(tail, 17);

  // Print the Linked list after insertion
  printLL(head);
  return 0;
}