#include <iostream>
#include <memory>
#include <string>
#include <vector>

template <typename T>
void Show(const T& mycontainer);

int main(){
  std::cout<<"defining vector and incresing size and capacity by push_back :"<<std::endl; 
  std::vector<std::unique_ptr<std::string>> myvec;
  for(int i{} ; i < 1000 ; i++){
    //push string one by one into vector
    myvec.push_back(std::make_unique<std::string>("str"+std::to_string(i)));
    std::cout << "in " << i+1 << "th level";
    Show(myvec);
    //std::cout<<" strig is : "<< *myvec[i]<<std::endl;
  }
  //________________________
  std::cout<<"defining vector by reserve with const capacity :"<<std::endl;
  std::vector<std::unique_ptr<std::string>> urvec;
  //declare vector with reserve
  urvec.reserve(1000);
  for(int i{} ; i < 1000 ; i++){
    urvec.push_back(std::make_unique<std::string>("str"+std::to_string(i)));
    std::cout << "in " << i+1 << "th level  ";
    Show(urvec);
    // std::cout<<" strig is : "<< *urvec[i]<<std::endl;
  }
  
}



//function for displying size and capacity of vector
template <typename T>
void Show(const T& mycontainer){
  std::cout <<"size is :  "<<mycontainer.size() << "and capacity is : " <<mycontainer.capacity() << std::endl;

  
}
