#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <set>
template<typename T> 
void show(T& v);
int main(){
  
  std::vector<int>v1{1,2,3,4,5,4,3,2,1};
  std::cout<<" this is my vector "<<std::endl;
  show(v1);
  //_______________________________________
  
  std::cout<<" std::remove() function for input = 2 "<<std::endl;
  std::remove(v1.begin() , v1.end() ,2);
  show(v1);
   int two{2};
  v1.erase(std::remove_if(v1.begin(),v1.end(),[two](int m){return m==two;}) , v1.end());
  std::cout<<" earasing all 2's with remove_if() and earse() " <<std::endl;
  show(v1);
   //_________________________________
  
   std::cout<<" doubling every elements  "<<std::endl; 
   std::for_each(v1.begin(),v1.end(),[](int& n){n*=2;});
   show(v1);
   //___________________________________________
   
    int av = std::accumulate(v1.begin(),v1.end(),0)/v1.size();
    std::cout<<"avrage is : "<<av<<std::endl;
    std::cout<<" soring by avarage with sort() "<<std::endl;
    std::sort(v1.begin(),v1.end(),[av](const int& a , const int& b){return std::abs(a-av) > std::abs(b-av);});
    show(v1);
    //______________________________
    
    std::cout<<" deleting reapited elements with erase()"<<std::endl;  
    std::vector<int>::iterator iter;
    // auto iter;
    std::sort(begin(v1),end(v1));
    iter = std::unique(v1.begin(),v1.end());
    v1.erase(iter,v1.end());
    show(v1);
    //__________________________
    std::cout<<"copying vector into set with copy() "<<std::endl;  
    std::set<int> s1;
    std::copy(v1.begin(),v1.end(),std::inserter(s1 , s1.end()));
    show(s1);
    
    int three{3};
    std::for_each(s1.begin() ,s1.end(),[&s1,three](int n){if(n>three)s1.erase(n);}); 
    std::cout<< " deleting elements which are bigger than 3 " <<std::endl;
    show(s1);
    return 0;

}





template<typename T>
void show(T&v){
  for(auto iter = v.begin() ; iter != v.end() ; iter++)
    std::cout<< " "<< *iter << " " ;
  std::cout<<std::endl;
}
