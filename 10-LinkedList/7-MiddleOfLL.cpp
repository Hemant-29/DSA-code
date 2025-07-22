#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
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
  cout << "NULL" << endl;
}

int findMid(Node* head) {
  // We use an algorithm called "SLOW AND FAST algorithm",
  // or "TORTOISE AND HARE algorithm"

  // We use 2 pointers -slow and fast here
  // Slow moves 1 step while fast moves 2 steps ahead

  int position = 1;

  Node* slow = head;
  Node* fast = head;

  while (fast != NULL && fast->next != NULL) {
    // Take slow and the position, 1 step ahead
    slow = slow->next;
    position++;

    // fast takes 2 steps ahead
    fast = fast->next->next;
  }

  return slow->data;
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 40);
  insertAtHead(head, 30);
  insertAtHead(head, 20);
  insertAtHead(head, 10);
  insertAtHead(head, 0);
  printLL(head);

  cout << "The mid of this Linked List is: " << findMid(head) << endl;
  return 0;
}