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

Node* reverseInK(Node*& head, int k) {
  // Recursion Base condition
  if (head == NULL) {
    return head;
  }

  // Count if k-nodes are actually left in the LL
  int count = 0;
  Node* temp = head;
  while (temp != NULL) {
    if (count == k) {
      break;
    }
    count++;
    temp = temp->next;
  }
  if (count < k) {
    return head;
  }

  int pos = 1;
  Node* curr = head;
  Node* prev = NULL;
  // Iterate through K-nodes
  while (pos <= k && curr != NULL) {
    // Reverse the K nodes
    Node* nextNode = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextNode;

    // Update the position
    pos++;
  }

  // Recursive call:-
  // This returns the starting point of the next k-group post reversal.
  // We Set this as the next of the head (last node of current group)
  head->next = reverseInK(curr, k);

  // Return the starting Node of this k-group
  return prev;
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 5);
  insertAtHead(head, 4);
  insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 1);
  cout << "Original Linked list: " << endl;
  printLL(head);

  // Reversing the Linked List
  cout << "After K group reversal: " << endl;
  Node* reversed_head = reverseInK(head, 3);
  printLL(reversed_head);
  return 0;
}