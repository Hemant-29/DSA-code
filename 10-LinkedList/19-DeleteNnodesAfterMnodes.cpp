#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node* next;

  Node() { this->next = NULL; }

  Node(int data) {
    this->next = NULL;
    this->data = data;
  }
};

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

void printLL(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "x" << endl;
}

void deleteLL(Node*& head) {
  cout << "Delting these n nodes: ";
  printLL(head);
  if (head == NULL) {
    return;
  }
  Node* temp = head;
  while (temp != NULL) {
    Node* nextNode = temp->next;
    delete temp;
    temp = nextNode;
  }
}

Node* deleteNAfterM(Node* head, int m, int n) {
  // __________________Base conditions__________________
  if (head == NULL) {
    return head;
  }
  if (head->next == NULL) {
    return head;
  }

  // ______________Solving 1 recursion case______________
  int pos = 1;
  Node* prev = NULL;
  Node* curr = head;
  Node* mthNode = NULL;
  Node* newHead = NULL;
  // Loop till m'th node is reached
  while (pos <= m && curr != NULL) {
    pos++;
    prev = curr;
    curr = curr->next;
  }
  // Set the mth node
  mthNode = prev;

  // Loop to the n'th node after m nodes
  pos = 1;
  while (pos <= n && curr != NULL) {
    pos++;
    prev = curr;
    curr = curr->next;
  }
  // Set the nth node
  newHead = curr;
  // Delete the link after prev Node
  prev->next = NULL;
  // Delete the Nodes after mth node
  deleteLL(mthNode->next);
  // Unlink mth node and point it to the new Head
  mthNode->next = newHead;

  // ________________Recursive Relation________________
  deleteNAfterM(newHead, m, n);

  return head;
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 12);
  insertAtHead(head, 6);
  insertAtHead(head, 2);
  insertAtHead(head, 1);
  insertAtHead(head, 10);
  insertAtHead(head, 4);
  insertAtHead(head, 9);
  insertAtHead(head, 5);
  insertAtHead(head, 3);
  insertAtHead(head, 1);
  insertAtHead(head, 9);

  cout << "Original linked list: " << endl;
  printLL(head);
  cout << endl;

  cout << "Linked list after Deletion: " << endl;
  printLL(deleteNAfterM(head, 2, 3));
  return 0;
}