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

Node* findMid(Node* head) {
  Node* slow = head;
  Node* fast = head;
  // NOTE: This is a modified mid finding function,
  // it returns the Node before the actual mid, in case of 2 mid nodes
  while (fast != NULL && fast->next != NULL && fast->next->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

int checkPalindrome(Node* head1, Node* head2) {
  Node* temp1 = head1;
  Node* temp2 = head2;
  while (temp1 != NULL && temp2 != NULL) {
    // Check for the equality of nodes
    if (temp1->data != temp2->data) {
      return false;
    }

    // Keep moving the temp forward
    temp1 = temp1->next;
    temp2 = temp2->next;
  }
  return true;
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 10);
  insertAtHead(head, 20);
  insertAtHead(head, 20);
  insertAtHead(head, 10);

  printLL(head);

  cout << "Checking for palindrome: " << endl;

  // Step 1: Find the Middle node of the Linked list
  Node* head2 = findMid(head);

  // Step 2: Break the Linked list from this middle point
  Node* temp = head2->next;
  head2->next = NULL;

  // Step 3: Set the new head for this second part of the linked list
  head2 = temp;

  // Step 4: Reverse this 2nd part of the linked list
  reverseLL(head2);

  // Step 5: Compare the head of LL1 with head2 of LL2 for palindrome
  int isPal = checkPalindrome(head, head2);

  cout << isPal << endl;

  return 0;
}