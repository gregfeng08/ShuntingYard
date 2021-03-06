#include <iostream>
#include <cstring>
#include "Node.h"
#ifndef LIST_H
#define LIST_H

using namespace std;

class List{
 public:
  List(); //s is for stack and q is for queue
  void push(char*);
  char* s_pop();
  char* q_pop();
  char* s_peek();
  char* q_peek();
  void pushNode(Node*);
  Node* peek_node();
  char* get_end(Node*&, bool);
  void push_end(Node*&, char*, Node*, bool);
  Node* getEndNode(Node*&);
  char* copy(char*);
  ~List();
 private:
  Node* head;
};
#endif
