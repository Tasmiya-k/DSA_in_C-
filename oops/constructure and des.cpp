//oops in c++(constructor AUR destructor sikhiye)

#include <iostream>

using namespace std;

class student{
    string name; 
    public:               //datamembers of class
    int age;
    bool gender;
    
    student(){
        cout<<"default constructor"<<endl;
    }     
    //default constructor(jb koi parameter ps nhi krte h toh call hota h)
    
    student(string s ,int a ,bool g){
        cout<<"parameterised constructor"<<endl;
        name=s; 
        age=a;
        gender=g;
        //parametric constructor
    }
    
    ~student(){
        cout<<"destructor called"<<endl;
    }
    
    student(student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;                  //copy constructor
    }
    
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;                       //operator overloading
        }
        
            return false;
    }
    
    
    void setname(string s){
        name=s;             //private data ko access kr paenge 
    }
    
    void getname(){
        cout<<name<<endl;
    }
     
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
   student a("ullu",19,1);
   //a.printinfo();
   
   student b; //yaha default constructor call hoga 
   student c=a; //yaha copy constructor call hoga
   
  //destructor call hoga return ke baad(jb objects destroy hoga)
  if(a==c){
    cout<<"same"<<endl;   
  }
  else{
      cout<<"not same";
  }
  
    return 0;
}

