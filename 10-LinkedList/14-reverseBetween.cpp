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

void reverseLL(Node*& head) {
  Node* prevNode = NULL;
  Node* currNode = head;

  while (currNode != NULL) {
    Node* nextNode = currNode->next;

    currNode->next = prevNode;
    prevNode = currNode;
    currNode = nextNode;
  }

  head = prevNode;
}

void reverseBetween(Node*& head, int left, int right) {
  // Store the "right Segment" and the "Left Segment" and "inBetween Segment"
  Node* leftLL = NULL;
  Node* rightLL = NULL;
  Node* inbetweenLL = NULL;

  // Step 1: Traverse the LL to set - left, right, inbetween segments
  int pos = 1;
  Node* curr = head;
  Node* prev = NULL;
  while (curr != NULL) {
    if (pos == left) {
      // Set left LL segment
      leftLL = prev;
      // Set inbetween Segment
      inbetweenLL = curr;
      // Break the Left Link
      if (prev != NULL) prev->next = NULL;
    }

    if (pos == right) {
      // Set right Linked list segment
      rightLL = curr->next;

      // Break the right Link
      curr->next = NULL;
    }

    // Update prev,curr and pos
    prev = curr;
    curr = curr->next;
    pos++;
  }

  cout << "Left Segment: ";
  printLL(leftLL);
  cout << "inbetween Segment: ";
  printLL(inbetweenLL);
  cout << "right Segment: ";
  printLL(rightLL);

  // Step 2: Reverse the inbetween Linked list
  reverseLL(inbetweenLL);

  // Step 3: Set the left segment's links back to the inbetween LL
  if (leftLL != NULL) leftLL->next = inbetweenLL;

  // Step 4: Set the right segment's links back to the inbetween LL
  Node* temp = inbetweenLL;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = rightLL;

  // Edge Case: If leftLL segment turns out to be NULL
  if (leftLL == NULL) {
    head = inbetweenLL;
  }
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 110);
  insertAtHead(head, 90);
  insertAtHead(head, 70);
  insertAtHead(head, 50);
  insertAtHead(head, 30);
  insertAtHead(head, 20);
  insertAtHead(head, 10);
  cout << "Original Linked list: " << endl;
  printLL(head);

  //   Reversing the Linked List
  cout << "Linked list after reversal: " << endl;
  int left = 1;
  int right = 5;
  reverseBetween(head, left, right);
  printLL(head);

  return 0;
}