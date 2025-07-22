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

// _____________________________Utility functions_____________________________

int getLength(Node* head) {
  Node* temp = head;
  int length = 0;
  while (temp != NULL) {
    temp = temp->next;
    length++;
  }

  return length;
}

void printLL(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

// ____________________________Insertion functions___________________________

void insertAtHead(Node*& head, Node*& tail, int data) {
  // You need both head and tail in this function so that you can handle the
  // NULL head edge case
  if (head == NULL) {
    // If the list is empty, create the first node and update head and the tail
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

void insertAtTail(Node*& head, Node*& tail, int data) {
  if (tail == NULL) {
    // If the tail is set to NULL, make a new node, update both head and tail
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    // Create a new Node, set tail's next to new Node, set the tail at new Node
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
  }
}

// _____________________________Deletion Function_____________________________

void deleteNode(Node*& head, Node*& tail, int position) {
  // Case for Empty Linked List
  if (head == NULL) {
    cout << "Nothing to delete, Linked List is already empty" << endl;
    return;
  }

  int length = getLength(head);

  // Case for Invalid position
  else if (position < 1 || position > length) {
    cout << "Enter a valid position" << endl;
    return;
  }

  // Case 1 - position = 1
  else if (position == 1) {
    // Hold the address of current head node in a variable temp
    Node* temp = head;

    // Set head to the next node of current head
    head = head->next;

    // EDGE case (Head is itself Tail and is the only node):
    if (temp == tail) {
      tail = NULL;
    }

    // Delete the memory address of previous head, which is now "temp"
    delete temp;

    return;
  }

  // case 2 - position = length
  else if (position == length) {
    // Store the previous node of tail in "prev"
    Node* prev = head;
    for (int i = 1; i < position - 1; i++) {
      prev = prev->next;
    }

    // Set the next of prev as NULL
    prev->next = NULL;

    // Delete the last Node(tail)
    delete (tail);

    // Set the tail on prev node
    tail = prev;

    return;
  }

  // Case 3 - position in-between
  else {
    // Take a prev node and reach to the given position
    Node* prev = head;
    for (int i = 1; i < position - 1; i++) {
      prev = prev->next;
    }

    // Set current as prev->next
    Node* curr = prev->next;

    // Set the prev's next to the next node
    prev->next = curr->next;

    // Delete the Node at the position
    delete curr;
  }
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtTail(head, tail, 5);
  // insertAtTail(head, tail, 10);
  // insertAtTail(head, tail, 15);
  // insertAtHead(head, tail, 1);

  cout << "Initial Linked List: " << endl;
  printLL(head);

  deleteNode(head, tail, 1);

  cout << "Linked List after deletion: " << endl;
  printLL(head);
  cout << "head: " << head << endl;
  cout << "tail: " << tail << endl;
  return 0;
}