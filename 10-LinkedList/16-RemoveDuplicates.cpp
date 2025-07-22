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

void removeDuplicates(Node*& head) {
  Node* temp = head;
  Node* lastNode = head;
  while (temp != NULL) {
    // If current Node is not same as the lastNode
    if (lastNode->data != temp->data) {
      // Set the next of the last Node as current Node
      lastNode->next = temp;

      // Set the lastNode as the last different Node
      lastNode = temp;
    }
    temp = temp->next;
  }

  // Edge case: When the LL is traversed completely but some duplicates are left
  lastNode->next = NULL;
}

void removeAndDeleteDuplicates(Node*& head) {
  // This approach is better because it leaves no used memory behind
  if (head == NULL || head->next == NULL) {
    // No Duplicates due to single element
    return;
  }

  Node* temp = head;
  while (temp != NULL && temp->next != NULL) {
    Node* nextNode = temp->next;
    // If next node and the current node is same
    if (nextNode->data == temp->data) {
      // Skip a node by setting current's next to the next of next
      temp->next = temp->next->next;
      // Delete the next Node
      delete nextNode;
    } else {
      // Move ahead only when 2 consecutive Nodes are not same
      temp = temp->next;
    }
  }
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 3);
  insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 1);
  insertAtHead(head, 1);
  insertAtHead(head, 1);

  cout << "Original linked list: " << endl;
  printLL(head);
  removeAndDeleteDuplicates(head);
  cout << "Linked list after duplicate removal: " << endl;
  printLL(head);
  return 0;
}