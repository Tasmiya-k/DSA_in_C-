//introduction to vectors
//implementation of vectors

#include <iostream>
#include<algorithm>
#include<vector> 

using namespace std;

int main()
{
  vector<int>v ;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  for(int i=0;i<v.size();i++){
      cout<<v[i]<<endl;
  }
  
  std::vector<int>::iterator it ;
  for(it=v.begin();it!=v.end();it++){
      cout<<*it<<endl;
  }
  
  //using auto funtion
  for(auto element:v){
      cout<<element<<endl;
  }
  
    return 0;
}
