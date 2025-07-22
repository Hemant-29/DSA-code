#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node* next;

  Node() { this->next = NULL; }

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void printLL(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertAtHead(Node*& head, int data) {
  if (head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
  } else {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
  }
}

void reverseLL(Node*& head) {
  Node* curr = head;
  Node* prevNode = NULL;
  while (curr != NULL) {
    Node* nextNode = curr->next;
    curr->next = prevNode;
    prevNode = curr;
    curr = nextNode;
  }
  head = prevNode;
}

void addOne(Node*& head) {
  // This function treats the linked list as a number,
  // where each node represents a digit, and increments the entire number by 1

  // Firstly, reverse the linked list
  reverseLL(head);
  int carry = 1;

  // Iterate to the last node of the LL
  Node* temp = head;
  Node* lastNode = head;
  while (temp != NULL) {
    // Step 1: Add carry to the Node data to form a Total
    int total = carry + temp->data;

    // Step 2: Separate the "carry forward" and the "digit to be stored in Node"
    int carryForward = total / 10;
    int digit = total % 10;

    // Step 3: Set the digit and assign the carry
    carry = carryForward;
    temp->data = digit;

    // Set previous Node
    lastNode = temp;

    // Update loop condition
    temp = temp->next;
  }

  // If Carry remains even after updating all the LL nodes
  if (carry > 0) {
    // Add a new Node at the last Node
    if (lastNode != NULL) {
      Node* newNode = new Node(carry);
      lastNode->next = newNode;
    }
  }

  // Reverse the Linked list again
  reverseLL(head);
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 9);
  insertAtHead(head, 9);
  insertAtHead(head, 9);

  cout << "Original Linked list:" << endl;
  printLL(head);
  addOne(head);
  cout << "Linked list after plus 1:" << endl;
  printLL(head);
  return 0;
}