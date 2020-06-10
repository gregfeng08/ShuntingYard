#include <iostream>
#include <cstring>
#include "Node.h"
#include "List.h"

using namespace std;

List::List(){
  head = NULL;
}

//pushes the node given a char
void List::push(char* newVal){
  push_end(head, newVal, NULL, true);
  return;
}
//pushes a node given a node
void List::pushNode(Node* newVal){
  push_end(head, NULL, newVal, false);
}

//pops from the queue
char* List::q_pop(){
  if(head == NULL){
    return NULL;
  }
  char* val = copy(head->getVal());
  Node* temp = head->getNext();
  delete head;
  head = temp;
  return val;
}
//pops from the stack
char* List::s_pop(){
  return get_end(head, true);  
}
//peeks from the queue
char* List::q_peek(){
  if(head == NULL){
    return NULL;
  }
  return head->getVal();
}

//peeks from the stack
char* List::s_peek(){
  return get_end(head, false);
}

//peek from stack, return node
Node* List::peek_node(){
  return getEndNode(head);
}

//delete the last node if del is true
char* List::get_end(Node* &current, bool del){
  if(current == NULL){
    return NULL;
  }
  if(current->getNext() == NULL){
    char* val = copy(current->getVal());
    if(del){
      current = NULL;
      delete current;
    }
    return val;
  }
  if(current->getNext()->getNext() == NULL){
    char* val = copy(current->getNext()->getVal());
    if(del){
      current->setNext(NULL);
      delete current->getNext();
    }
    return val;
  }
  Node* next = current->getNext();
  get_end(next, del);
}

//return the node at the end
Node* List::getEndNode(Node* &current){
  if(current == NULL){
    return NULL;
  }
  else if(current->getNext() == NULL){
    return current;
  }
  Node* next = current->getNext();
  getEndNode(next);
}

//pushes
void List::push_end(Node* &current, char* c_in, Node* n_in, bool type){
  if(current == NULL){
    if(type){
      current = new Node (c_in);
    }
    else{
      current = n_in;
    }
    return;
  }
  if(current->getNext() == NULL){
    if(type){
      current->setNext(new Node(c_in));
    }
    else{
      current->setNext(n_in);
    }
    return;
  }
  Node* next = current->getNext();
  push_end(next, c_in, n_in, type);
}

//generates a copy of the char
char* List::copy(char* in){
  char* out = new char[strlen(in)+1];
  strcpy(out, in);
  return out;
}

//deconstructor
List::~List(){
  delete head;
}
