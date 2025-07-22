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

Node* NthNodefromEnd(Node* head, int n) {
  // We Will use fast and slow approach again, but the difference is that:
  //  the fast pointer will travel "+ n steps" ahead of the slow pointer

  Node* prev = NULL;
  Node* slow = head;
  Node* fast = head;
  for (int it = 1; it <= n; it++) {
    fast = fast->next;
  }
  // Now, fast is exactly "+n steps ahead" of the slow

  // Traverse the LL until fast doesn't reach the end
  while (fast != NULL) {
    fast = fast->next;
    prev = slow;
    slow = slow->next;
  }
  // Now, the slow pointer would be the previous node to the nth node from end

  return prev;
}

int main() {
  Node* head = NULL;
  // insertAtHead(head, 5);
  // insertAtHead(head, 4);
  // insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 1);

  cout << "Original linked list: " << endl;
  printLL(head);

  // Edge case
  if (head == NULL) {
    return 0;
  }

  Node* nthLastNode = NthNodefromEnd(head, 2);
  cout << "N'th node from end: " << endl;
  if (nthLastNode != NULL)
    cout << nthLastNode->data << endl;
  else
    cout << "NULL" << endl;

  cout << "Deleting nth node from the end: " << endl;
  if (nthLastNode == NULL) {
    Node* nextNode = head->next;
    delete head;
    head = nextNode;
  } else if (nthLastNode->next != NULL) {
    Node* nextNode = nthLastNode->next;
    nthLastNode->next = nextNode->next;
    delete nextNode;
  }
  printLL(head);

  return 0;
}