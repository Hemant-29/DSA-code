#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node* next;

  // Default Constructor
  Node() { this->next = NULL; }

  // Constructor that initializes data
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

int getLength(Node* head) {
  Node* temp = head;
  int length = 0;
  while (temp != NULL) {
    temp = temp->next;
    length++;
  }

  return length;
}

Node* getTail(Node* head) {
  if (head == NULL) return NULL;
  Node* temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  Node* tail = temp;
  return tail;
}

void insertAtHead(Node*& head, Node*& tail, int data) {
  // You need both head and tail in this function so that you can handle the
  // NULL head edge case
  if (head == NULL) {
    // If the list is empty, create the first node and update head
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    // Create a new node, link it to the current head, and update head
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
  }
}

// Note that this function has worse time complexity O(n), compared to when the
// tail is passed directly
void insertAtTailUsingHead(Node*& head, int data) {
  if (head == NULL) {
    // If the list is empty, create the first node and update tail
    Node* newNode = new Node(data);
    head = newNode;
  } else {
    Node* tail = getTail(head);
    // Create a new node, link it after current tail
    Node* newNode = new Node(data);
    tail->next = newNode;
  }
}

// This function has a complexity O(1)
void insertAtTail(Node*& head, Node*& tail, int data) {
  if (tail == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
  }
}

void insertAtPosition(Node*& head, Node*& tail, int position, int data) {
  int length = getLength(head);

  if (position < 1 || position > length + 1) {
    cout << "Please give a valid position" << endl;
    return;
  }

  else if (position == 1) {
    // Add the Node at the head
    insertAtHead(head, tail, data);
  }

  else if (position == length + 1) {
    // Add the Node at the tail
    insertAtTail(head, tail, data);
  }

  else {
    // Make a new Node
    Node* newNode = new Node(data);

    // Make 2 pointers for previous and current node
    Node* prev = head;
    for (int i = 1; i < position - 1; i++) {
      prev = prev->next;
    }
    newNode->next = prev->next;
    prev->next = newNode;
  }
}

void printLL(Node* head) {
  // Use a temporary pointer to traverse the list without modifying head
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main() {
  // _______THIS IS GENERALLY HOW A PROPER LINKED LIST IS CREATED_______

  // Creating the initial node of the linked list with value 5
  Node* node1 = new Node(5);
  Node* head = node1;
  Node* tail = node1;

  // Inserting new nodes at the beginning of the list
  insertAtHead(head, tail, 10);
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 30);

  // Inserting new nodes at the end of the list
  insertAtTail(head, tail, 1);

  printLL(head);

  // Inserting new Node at any position (here 3)
  insertAtPosition(head, tail, 6, 15);

  printLL(head);
  return 0;
}
