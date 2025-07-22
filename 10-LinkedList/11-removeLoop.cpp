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

bool checkCycle(Node* head) {
  // We use tortoise-Hare method to find any loops in the LL
  Node* slow = head;
  Node* fast = head;

  // EDGE case: if head points to head itself
  if (head == NULL) {
    return false;
  }

  // Run a loop til end
  while (fast != NULL && fast->next != NULL) {
    // Slow takes 1 step further, fast takes 2
    slow = slow->next;
    fast = fast->next->next;

    // A cycle is found if slow and fast are both at the same position
    if (slow == fast) {
      return true;
    }
  }
  return false;
}

void removeCycle(Node*& head) {
  // We remove cycle from a LL by finding the node where the cycle begins.
  // Then, we take the previous node to that node and point it to null

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
    return;
  }

  // From this position of slow and fast pointers, perform the following steps

  // Define prevNode
  Node* prevNode = fast;

  // step 1. Take the slow pointer to the starting of the LL (i.e- at head)
  slow = head;

  // step 2: move the fast and slow pointers by until they meet
  while (slow != fast) {
    // step 3: We store the node where fast previously was, before moving 1 step
    prevNode = fast;

    // step 4: Move both the slow and the fast pointers by only 1 step
    slow = slow->next;
    fast = fast->next;
  }

  // prevNode is the last node inside the loop,
  // just behind the beginning point of the cycle.
  // So we point it to NULL to remove the cycle in the LL
  prevNode->next = NULL;
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 40);
  insertAtHead(head, 30);
  insertAtHead(head, 20);
  insertAtHead(head, 10);
  insertAtHead(head, 0);
  printLL(head);

  head->next->next->next->next = head->next;

  cout << "Checking for cycle: " << checkCycle(head) << endl;

  cout << "Removing Cycle... " << endl;
  removeCycle(head);

  cout << "Checking for cycle again: " << checkCycle(head) << endl;

  return 0;
}