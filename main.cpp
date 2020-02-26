#include <iostream>
#include "list.h"
#include "node.h"

using namespace std;

void toPostfix(List* list);
void toPrefix();
void toInfix();

int main() {
  cout << "Please enter your expression: " << endl;
  char *input = new char[50];
  cin.getline(input, 50, '\n');
  char *token = strtok(input, " "); //Splits the inputted expression into tokens
  List* newList = new List(); //Creates a new linkedlist for the manipulation operations
  while (token != NULL) { //reads through each char value until it hits a null
    Node* newNode = new Node(token);
    newList->enqueue(newNode); //Puts the split expression int he queue
    token = strtok(NULL, " "); 
  }
  cout << newList->peek() << endl;
  
  
}

void toPostfix(List* list) {
  
}
