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

Node* addTwoNumber(Node* head1, Node* head2) {
  // Reverse both the Linked lists
  reverseLL(head1);
  reverseLL(head2);

  // Take a carry which is initially 0
  int carry = 0;

  // Create a separate linked (output) list for the output
  Node* output_tail = NULL;
  Node* output_head = NULL;

  Node* temp1 = head1;
  Node* temp2 = head2;
  // Iterate through both the linked lists
  while (temp1 != NULL || temp2 != NULL) {
    int totalSum = 0;
    // Total sum is the sum of (data of both linked lists + the carry)
    if (temp1 != NULL) totalSum += temp1->data;
    if (temp2 != NULL) totalSum += temp2->data;
    totalSum += carry;

    // Take the digit and carry forward of the totalSum
    int digit = totalSum % 10;
    carry = totalSum / 10;

    // Make a new Node from digit and add it to the ouput Linked list
    Node* newNode = new Node(digit);
    if (output_tail == NULL) {
      output_tail = newNode;
      output_head = output_tail;
    } else {
      output_tail->next = newNode;
      output_tail = output_tail->next;
    }

    // Update the lastNode and the temp pointers
    if (temp1 != NULL) temp1 = temp1->next;
    if (temp2 != NULL) temp2 = temp2->next;
  }

  // Add another Node if some carry is leftover
  if (carry > 0) {
    Node* newNode = new Node(carry);
    output_tail->next = newNode;
  }
  reverseLL(output_head);
  return output_head;
}

int main() {
  // Linked List 1
  Node* head1 = NULL;
  insertAtHead(head1, 9);
  // insertAtHead(head1, 9);
  // insertAtHead(head1, 9);

  // Linked List 2
  Node* head2 = NULL;
  insertAtHead(head2, 9);
  insertAtHead(head2, 9);
  insertAtHead(head2, 9);

  cout << "Original Linked lists:" << endl;
  printLL(head1);
  printLL(head2);

  cout << "After Addition:" << endl;
  printLL(addTwoNumber(head1, head2));
  return 0;
}