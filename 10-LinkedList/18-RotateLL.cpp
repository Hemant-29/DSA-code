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

Node* rotateLL(Node*& head, int k) {
  // Edge case
  if (head == NULL || head->next == NULL) {
    return head;
  }

  // Traverse the LL to get the length and to link the last node
  int length = 0;
  Node* temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
    length++;
  }
  length++;
  // Set the next of the last Node to the head
  temp->next = head;

  // Get the node to be unlinked after all rotations
  int unlinkPos = length - (k % length);

  // Traverse through the LL to the node to be unlinked
  Node* curr = head;
  int pos = 1;
  while (pos != unlinkPos) {
    curr = curr->next;
    pos++;
  }
  // Set the newHead to the node after this unlink Node
  Node* newHead = curr->next;

  // Unlink this node at the position of unlink node
  curr->next = NULL;

  return newHead;
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 5);
  insertAtHead(head, 4);
  insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 1);

  cout << "Original linked list: " << endl;
  printLL(head);

  cout << "Linked list after k rotation: " << endl;
  printLL(rotateLL(head, 7));
  return 0;
}