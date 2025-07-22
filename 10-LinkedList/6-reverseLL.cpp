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

void insertAtHead(Node*& head, Node*& tail, int data) {
  if (head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
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

void reverseLL(Node*& head, Node*& tail) {
  Node* prevNode = NULL;
  Node* currNode = head;

  // Tail: Set it on the head for LL reversal
  tail = head;

  while (currNode != NULL) {
    // 1. Set the nextNode to the next of currentNode
    Node* nextNode = currNode->next;

    // 2. Set the next of current Node to Previous Node
    currNode->next = prevNode;

    // 3. Take the prevNode and the currNode one steps further ahead
    prevNode = currNode;
    currNode = nextNode;
  }

  // IMPORTANT: Remember to set the head on the prevNode after loop ends
  head = prevNode;
}

// Reversing a Linked List using recursion
void reverseLLRecursion(Node*& head, Node*& prevNode) {
  // Base Condition
  if (head == NULL) {
    head = prevNode;
    return;
  }

  // Keep track of nextNode, Set next of head on prevNode
  Node* nextNode = head->next;
  head->next = prevNode;

  // Advance our two pointers
  prevNode = head;
  head = nextNode;

  // Recursive conditions with new head on next node
  return reverseLLRecursion(head, prevNode);
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head, tail, 50);
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 10);
  printLL(head);
  cout << "Head and Tail: " << head->data << ", " << tail->data << endl;
  cout << endl;

  //   Reversing the Linked List
  cout << "Linked list after reversal: " << endl;
  reverseLL(head, tail);
  printLL(head);
  cout << "Head and Tail: " << head->data << ", " << tail->data << endl;
  cout << endl;

  // Reverse the Linked list using recursion
  Node* prev = NULL;
  cout << "Linked list after reversal: " << endl;
  reverseLLRecursion(head, prev);
  printLL(head);

  return 0;
}