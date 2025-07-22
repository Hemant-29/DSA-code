#include <iostream>
using namespace std;

// _________________________Node Class definition_________________________
class Node {
 public:
  int data;
  Node* next;
  Node* prev;

  Node() {
    this->next = NULL;
    this->prev = NULL;
  }

  Node(int data) {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};

// _________________________________Functions_________________________________
void printLL(Node* head) {
  Node* temp = head;
  cout << "-";
  while (temp != NULL) {
    cout << temp->data << "-";
    temp = temp->next;
  }
  cout << endl;
}

int getLength(Node* head) {
  Node* temp = head;
  int length = 0;
  while (temp != NULL) {
    length++;
    temp = temp->next;
  }
  return length;
}

// __________________________Insertion functions__________________________

void insertAtHead(Node*& head, Node*& tail, int data) {
  // Edge case for: Empty Linked List
  if (head == NULL) {
    // Create a new Node and point the head and tail to it
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    // Create a node, set its next to head, set head's prev to it, set new head
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
}

void insertAtTail(Node*& head, Node*& tail, int data) {
  // Edge case for empty Linked List
  if (head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    // Create new node, set tail's next to it, set its prev to tail, update tail
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void insertAtPosition(Node*& head, Node*& tail, int position, int data) {
  int length = getLength(head);

  // Edge Case: When out of range
  if (position > length + 1 || position < 1) {
    cout << "can't insert, give appropriate position" << endl;
    return;
  }

  // Case 1: When LL is empty
  else if (head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }

  // Case 2: For insertion at postion 1
  else if (position == 1) {
    insertAtHead(head, tail, data);
    return;
  }

  // Case 3: For insertion at ending position
  else if (position == length + 1) {
    insertAtTail(head, tail, data);
    return;
  }

  // Case 4: For insertion at middle position
  else {
    // Create a new Node
    Node* newNode = new Node(data);

    // Initialize previous and next nodes, iterate them to correct position
    Node* prevNode = head;
    Node* currNode = NULL;
    for (int i = 1; i < position - 1; i++) {
      prevNode = prevNode->next;
    }
    currNode = prevNode->next;

    // Connect all the links with the new Node
    prevNode->next = newNode;
    newNode->prev = prevNode;
    newNode->next = currNode;
    currNode->prev = newNode;
  }
}

// _________________________Deletion functions_________________________
void deleteNode(Node*& head, Node*& tail, int position) {
  int length = getLength(head);

  // Case 1: if the Linked List is empty
  if (head == NULL) {
    cout << "Can't delete from an empty Linked List" << endl;
    return;
  }

  // Checking for proper position values
  else if (position < 1 || position > length) {
    cout << "Please enter a valid position" << endl;
    return;
  }

  // EDGE Case: If Array has only one element
  else if (head == tail) {
    delete head;
    head = NULL;
    tail = NULL;
    return;
  }

  // Case 2: Deleting from the first position
  else if (position == 1) {
    // set the second node
    Node* secondNode = head->next;
    // Set prev of second node as NULL
    secondNode->prev = NULL;
    // Delete the head Node
    delete head;
    // Set the new head on second node
    head = secondNode;

    return;
  }

  // Case 3: Deleting from Last Postion
  else if (position == length) {
    // Set tail to the previous Node
    tail = tail->prev;
    // Delete the Node next to it
    delete tail->next;
    // Set the next of the tail to NULL
    tail->next = NULL;

    return;
  }

  // Case 4: Deleting from any middle position
  else {
    // Iterate to the previous Node and the Curr Node for the given position
    Node* prevNode = head;
    Node* currNode = NULL;
    Node* nextNode = NULL;
    for (int i = 1; i < position - 1; i++) {
      prevNode = prevNode->next;
    }
    currNode = prevNode->next;
    nextNode = currNode->next;

    // Set the next of previous Node to currNode's next
    prevNode->next = nextNode;
    // Set Next node's previous to the previous Node
    nextNode->prev = prevNode;

    // Delete the current Node
    delete currNode;
  }
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head, tail, 15);
  insertAtHead(head, tail, 5);
  insertAtTail(head, tail, 20);

  printLL(head);
  cout << "head and tail are: " << head->data << ", " << tail->data << endl;
  cout << endl;

  cout << "inserting Node..." << endl;
  insertAtPosition(head, tail, 3, 0);

  printLL(head);
  cout << "head and tail are: " << head->data << ", " << tail->data << endl;
  cout << endl;

  cout << "deleting Node..." << endl;
  deleteNode(head, tail, 3);

  printLL(head);
  cout << "head and tail are: " << head->data << ", " << tail->data << endl;
  cout << endl;

  return 0;
}