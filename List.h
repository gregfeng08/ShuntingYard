#ifndef LIST_H_INCLUDED //Header guard
#define LIST_H_INCLUDED

#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

class List{
 public:
  List();
  ~List();
  void push(Node*); //pueshes node to the stack
  void pop(); //removes head from stack
  void remove(); //removes top without deleting the node
  Node* peek(); //returns the head
  
  void enqueue(Node*); //adds the node to the queue
  void dequeue(); //deletes the node in the queue
  bool listEmpty(); //check for list emptiness
  Node* getHead(); //returns the head of the list
  Node* getTail(); //returns the tail of the list;
 private:
  Node* head; //head of linkedlist
  Node* tail; //tail of linkedlist
};

#endif
