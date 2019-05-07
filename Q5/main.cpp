#include "Stack.h"
#include "Stack.hpp"
#include <iostream>

int main(){
  Stack<int>s;
  s.push(3);
  s.push(5);
  s.push(6);
  s.push(7);
  s.push(9);
  s.push(6);
  s.push(1);
  s.push(3);
  s.push(8);
    
  s.pop();
  s.pop();
  s.pop();
  s.Show();
  return 0;

}
