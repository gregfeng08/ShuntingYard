#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

//Constructor
Node::Node(char* newVal) {
  val = new char[strlen(newVal)+1];
  strcpy(val, newVal);
  next = NULL;
  right = NULL;
  left = NULL;
}

//gets the value of the node
char* Node:: getVal(){
  return val;
}
//sets the next value of the node
void Node::setNext(Node* newNext){
  next = newNext;
}

//gets the next value of the node
Node* Node::getNext(){
  return next;
}

//Getters and setters for right and left nodes 
void Node::setRight(Node* newRight){
  right = newRight;
}
Node* Node::getRight(){
  return right;
}
void Node::setLeft(Node* newLeft){
  left = newLeft;
}
Node* Node::getLeft(){
  return left;
}

//deconstructor
Node::~Node(){
  delete[] val;
  next = NULL;
}
