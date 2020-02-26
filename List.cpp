#include "list.h"
#include "node.h"

List::List() {
  head = NULL;
  tail = NULL;
}

List::~List() {

}

void List::push(Node* node) { //Adds node to front of linkedlist
  if (listEmpty() == true) { //If list is empty make new node head
    head = node;
    tail = node;
  }
  else { //If not empty add it to the end of list
    node->setNext(head);
    head = node;
  }

}

void List::pop() { //Removes frontmost node and deletes it
  if (listEmpty() != true) { //If there is a lsit
    Node* temp = head;
    head = head->getNext();
    delete temp;
  }
  else if (head == 0){ //If no head
    head = 0;
    tail = 0;
  }}

void List::remove() {//removes from the front without deleting the node
  if (listEmpty() != true) {//if there is a list
    head = head->getNext();
  }
  else if (head == 0) { //if head is null
    head = 0;
    tail = 0;
  }
}

Node* List::peek() {//returns the front
  return head;
}

void List::enqueue(Node* node) {//adds to the end of queue
  if(listEmpty() == true) {
    head = node;
    tail = node;
  }
  else {
    tail->setNext(node);
    tail = node;
  }
}

void List::dequeue() { //remove from front of queue ad deltes the node
  if (listEmpty() != true) {
    Node* temp = head;
    head = head->getNext();
    delete temp;
  }
  else if (listEmpty()) {
    head = 0;
    tail = 0;
  }
}

bool List::listEmpty() { //Checks if the list is empty
  if (head == 0) {//if the head is null
    tail = 0;
    return true;
  }
  else {
    return false;
  }
}

Node* List::getHead() {
  return head;
}

Node* List::getTail() {
  return tail;
}
