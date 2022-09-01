/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stack>

using namespace std;

bool isvalid(string s){
    int n=s.size();
    stack<char> st;
    
    bool ans=true;
    for(int i=0;i<n;i++){
        if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() and st.top()=='('){
                st.pop();
                
            }
            else{
                ans=false;
                break;
            }
        }
        
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
               
            }
            else{
                ans=false;
                break;
            }
        }
        
        else if(s[i]=='}'){
            if(!st.empty() and st.top()=='{'){
                st.pop();
                
            }
            else{
                ans=false;
                break;
            }
        }
        
        
    }
    
    if(!st.empty()){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    string s="[{()}";
    if(isvalid(s)){
        cout<<"balanced paranthesis";
    }
    else{
        cout<<"not balanced paranthesis";
    }

    return 0;
}
