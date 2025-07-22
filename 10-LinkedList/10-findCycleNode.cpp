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

Node* findCycleNode(Node* head) {
  // We use this function to find the node where the cycle begins
  // For this, we use - "Tortoise and Hare algorithm"

  Node* slow = head;
  Node* fast = head;

  // Loop through the end of the Linked List
  while (fast != NULL && fast->next != NULL) {
    // Take the slow pointer 1 step ahead and the fast pointer 2 steps
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast) {
      // Get out of the loop at the point, where the slow meets the fast pointer
      break;
    }
  }

  // Return NULL if the loop ended due to no cycles
  if (fast == NULL || fast->next == NULL) {
    return NULL;
  }

  // From this position of slow and fast pointers, perform the following steps

  // step 1. Take the slow pointer to the starting of the LL (i.e- at head)
  slow = head;

  // step 2: move the fast and slow pointers by until they meet
  while (slow != fast) {
    // step 3: Move both the slow and the fast pointers by only 1 step
    slow = slow->next;
    fast = fast->next;
  }
  // The meeting point will be starting of the loop
  return slow;
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 40);
  insertAtHead(head, 30);
  insertAtHead(head, 20);
  insertAtHead(head, 10);
  insertAtHead(head, 0);
  printLL(head);

  head->next->next->next->next = head;

  cout << "Cycle starts at: " << findCycleNode(head) << endl;
  return 0;
}