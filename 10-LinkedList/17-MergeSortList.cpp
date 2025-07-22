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

Node* getMid(Node* head) {
  Node* slow = head;
  Node* fast = head;
  while (fast != NULL && fast->next != NULL && fast->next->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

Node* merge(Node* left, Node* right) {
  Node* tempL = left;
  Node* tempR = right;
  Node* output = NULL;

  // Insert the data into output array based on the size
  while (tempL != NULL && tempR != NULL) {
    if (tempL->data < tempR->data) {
      insertAtHead(output, tempL->data);
      tempL = tempL->next;
    } else {
      insertAtHead(output, tempR->data);
      tempR = tempR->next;
    }
  }

  // Reverse the output LL
  Node* output_tail = output;
  reverseLL(output);

  // Add the remaining data into the output Linked list
  if (tempL != NULL) {
    output_tail->next = tempL;
  } else if (tempR != NULL) {
    output_tail->next = tempR;
  }

  return output;
}

Node* mergeSort(Node* head) {
  // Base Condition
  if (head == NULL) {
    return head;
  }
  if (head->next == NULL) {
    return head;
  }

  // Recursion logic body
  Node* mid = getMid(head);
  // 1. Get the left and right halves of the LL
  Node* leftHalf = head;
  Node* rightHalf = mid->next;
  // 2. Break the link after the middle element
  mid->next = NULL;
  // 3. call recursion for both halves and store answers
  Node* recLeft = mergeSort(leftHalf);
  Node* recRight = mergeSort(rightHalf);

  // Recursive relation: Return answers for both halves
  return merge(recLeft, recRight);
}

int main() {
  Node* head = NULL;
  insertAtHead(head, 1);
  insertAtHead(head, 2);
  insertAtHead(head, 5);
  insertAtHead(head, 3);
  insertAtHead(head, 4);

  cout << "Original linked list: " << endl;
  printLL(head);
  cout << "Sorted Linked list: " << endl;
  printLL(mergeSort(head));

  return 0;
}