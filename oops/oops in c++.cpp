//oops in c++

#include <iostream>

using namespace std;

class student{
    public:
    string name;     //datamembers of class
    int age;
    bool gender;
    
    void printinfo(){
        cout<<"name=";
       cout<<name<<endl;
       cout<<"age=";                  //print krega
      cout<<age<<endl;
       cout<<"gender=";
      cout<<gender<<endl;
    }
};

int main()
{
   student arr[3];            //in sab ko call krenge
   for(int i=0;i<3;i++){
       cout<<"name=";
       cin>>arr[i].name;
       cout<<"age=";
       cin>>arr[i].age;
       cout<<"gender=";
       cin>>arr[i].gender;
   }
   
   
  for(int i=0;i<3;i++){
      arr[i].printinfo();
  } 
    return 0;
}

