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

int main() {
  Node* head = NULL;
  insertAtHead(head, 40);
  insertAtHead(head, 30);
  insertAtHead(head, 20);
  insertAtHead(head, 10);
  insertAtHead(head, 0);
  printLL(head);

  head->next->next->next->next = head;

  cout << "Checking cycle: " << checkCycle(head) << endl;
  return 0;
}