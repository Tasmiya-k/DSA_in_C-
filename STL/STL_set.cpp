//STL set

#include <iostream>
#include <set>
using namespace std;

int main()
{
   set<int>s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(3);
   s.insert(4);
   s.insert(5);
   s.insert(6);
   s.insert(7);
   s.size();
   for(auto a:s){
       cout<<a<<" ";
   }
   s.erase(1);
   s.erase(s.begin(),s.find(5));        //remove all the elements from begining to 5;
   
   cout<<"\n";
   for(auto i=s.begin();i!=s.end();i++){
       cout<<*i<<" ";
   } cout<<"\n"<<s.size()<<"\n";
   
  cout<<"Print in reverse\n";
  for(auto i=s.rbegin(); i!=s.rend();i++){
      cout<<*i<<" ";
  }
   
   cout<<"\n Lower Bound and Upper Bound\n";
   cout<<*s.lower_bound(6)<<"\n";            //having same key or greater than that
   cout<<*s.upper_bound(6)<<"\n";           //having key greater than that

    return 0;
}
