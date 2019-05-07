#include <iostream>
#include <cmath>
#include <set>
#include <array>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <unordered_set>
template <typename T>
void Show(const T& mycontainer);

int main(){
  //_____________array a ______________
  std::cout<<"this is array a :"<<std::endl;
  int a[50]{};
  //generating array a 
  std::generate_n(a,50,[](){static int j{};return(++j);});
  std::unordered_set<int> seta;
  //copying array a to set seta
  seta.insert(a , a+50);
  //showing every elments of seta
  std::for_each(seta.begin(),seta.end() ,[](int n){std::cout<< n <<" "; });
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::cout<<std::endl;


  //_________________array b____________________

  srand(time(0));
  
  std::cout<<"this is array b : "<<std::endl;
  int b[50]{};
  //generating array b
  std::generate_n(b,50,[](){return rand()%50+1;});
  //copying array b to set setb
  std::unordered_set<int> setb(b, b+50);
  //showing every elemets of setb
  std::for_each(setb.begin(),setb.end() ,[](int n){std::cout<< n <<" "; });
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::cout<<std::endl;
  //copying setb to vecb and fill vecb by zero until size of vecb = 50
  std::vector<int> vecb(50);
  std::copy(setb.begin(),setb.end(),vecb.begin());
  std::fill(vecb.end(),vecb.end()+(50-vecb.size()),0);

  //_________________array c________________
  
  std::cout<<"this is array c : " <<std::endl;
  int c[50]{};
  //generating array c 
  std::generate_n(c,50,[](){static int m{};return(++m);});
  //copying array c to vecc
  std::vector<int>vecc(c ,c+50);
  //making random number of vecc 
  std::random_shuffle(vecc.begin(),vecc.end());
  //showing every elemt of vecc
  std::for_each(vecc.begin(),vecc.end() ,[](int n){std::cout<< n <<" "; });
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::cout<<std::endl;
    

  //___________________b^2 - C^2 _______________

  std::cout<<" this is b^2 - c^2 : "<<std::endl;
  
  std::vector<int> resualt(50);
  //every elemt of vecb and vecc replaced by power2 of them
  std::for_each(vecb.begin() ,vecb.end() ,[](int&n){n = pow(n,2);});
  std::for_each(vecc.begin() ,vecc.end() ,[](int&n){n = pow(n,2);});
  //inserting b^2 - c^2 into resualt 
  std::for_each(resualt.begin() ,resualt.end() ,[&vecb,&vecc](int&n){int k=*(vecb.end())-*(vecc.end()); vecc.pop_back();vecb.pop_back();n =k ;});
  //showing resualt 
    std::for_each(resualt.begin(),resualt.end() ,[](int n){std::cout<< n <<" "; });
  std::cout<<std::endl;
  //showing resualt by Show function 
   Show(resualt);
}

//this function show containers by iterator . u can test it
template <typename T>
void Show(const T& mycontainer){
  
  for(auto iter{mycontainer.begin()} ; iter != mycontainer.end() ; ++iter)
    std::cout<< *iter <<" ";
  std::cout<<std::endl;
}
