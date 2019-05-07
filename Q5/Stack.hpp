#ifndef  STACK_HPP
#define STACK_HPP
#include "Stack.h"

template<class T>
node* Stack<T>::pop(){
  std::cout<<"stack pop function"<<std::endl;
  node* temp;
  if(isEmpty())
    std::cout<<"stack is empty"<<std::endl;
  else{
    temp = top ;
    top = top -> next;
  }
  return temp;
}

template<class T>
node* Stack<T>::push(T value){
  
  std::cout<<"stack push function"<<std::endl;
  node* temp;
  temp ->data = value;
  temp ->next=nullptr;
  if(!isEmpty())
    temp ->next = top;
  top = temp ;
  return top ;
  
}
template<class T>
Stack<T>::Stack(){
  top = nullptr;
  std::cout<<" stack constructor "<<std::endl;
}
template<class T>
Stack<T>::~Stack(){
  std::cout<<" stack destructor "<<std::endl;
}

template<class T>
bool Stack<T>::isEmpty(){
  if(top==nullptr)
    return 1;
  else
    return 0;
}

template<class T>
void Stack<T>::Show(){
  if(isEmpty())
    std::cout<<"stack is empty"<<std::endl;
  else{
    node* temp{top};
    while(temp!= nullptr){
      std::cout<<temp->data<< " ";
      temp = temp ->next;
    }
    std::cout<<std::endl;
  }
  
}
#endif
