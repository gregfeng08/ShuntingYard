#include <iostream>
#include <cstring>

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node{
 public:
  Node(char*);
  char* getVal();
  void setNext(Node*);
  Node* getNext();
  Node* getRight(); //Getters and setters of the left and right nodes
  Node* getLeft();
  void setRight(Node*);
  void setLeft(Node*);
  ~Node();
 private:
  Node* right;
  Node* left;
  char* val;
  Node* next;
};
#endif
