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

Node* insertAtTail(Node*& head, Node*& tail, int data) {
  if (head == NULL || tail == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
  }
  return tail;
}

void printLL(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "x" << endl;
}

int getLength(Node* head) {
  int len = 0;
  Node* temp = head;
  while (temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}

Node* findIntersection(Node* L1, Node* L2) {
  // In this approach, we move the head of the longer linked list forward
  // by the difference in lengths between the two lists.
  // This way, both lists will have the same number of nodes left to check.
  // Then we move both pointers one step at a time until they meet at the
  // intersection point.

  int len1 = getLength(L1);
  int len2 = getLength(L2);

  if (len1 >= len2) {
    // This mean that L1 is longer and hence, we shift its starting point ahead
    int shift = len1 - len2;
    while (shift != 0) {
      L1 = L1->next;
      shift--;
    }
  } else {
    // L2 is longer and we shift its starting point further
    int shift = len2 - len1;
    while (shift != 0) {
      L2 = L2->next;
      shift--;
    }
  }

  // Iterate both L1 and L2 until they reach common intersection Node
  while (L1 != NULL || L2 != NULL) {
    if (L1 == L2) {
      return L1;
    }
    L1 = L1->next;
    L2 = L2->next;
  }
  return NULL;
}

int main() {
  Node* LL1 = NULL;
  Node* LL1_tail = NULL;
  Node* LL2 = NULL;
  Node* LL2_tail = NULL;
  insertAtTail(LL1, LL1_tail, 1);
  insertAtTail(LL1, LL1_tail, 2);
  Node* thirdNode = insertAtTail(LL1, LL1_tail, 3);
  insertAtTail(LL1, LL1_tail, 4);
  insertAtTail(LL1, LL1_tail, 5);

  insertAtTail(LL2, LL2_tail, 1);

  LL2_tail->next = thirdNode;

  cout << "Original linked lists: " << endl;
  cout << "LL1: ";
  printLL(LL1);
  cout << "LL2: ";
  printLL(LL2);

  Node* intersectionNode = findIntersection(LL1, LL2);

  cout << "Intersection Node is: ";
  if (intersectionNode != NULL) {
    cout << intersectionNode->data << endl;
  }

  return 0;
}