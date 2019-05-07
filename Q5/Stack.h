#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template<class T>
class Stack{
 public:
  Stack();
  ~Stack();
  node* push(T elem);
  node* pop();
  bool isEmpty();
  void Show();
  struct node{
    T data;
    node* next;
  };
 private: 
  node* top;
  
};
#endif
