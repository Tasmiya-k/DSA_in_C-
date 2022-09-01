//Prefix expression

#include <iostream>
#include<stack>
#include<math.h>

using namespace std;

int PrefixExpression(string s){
    
    stack<int> st;
    
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){        //agr ye no. hai
            st.push(s[i]-'0');             //Ascii value push karenge
        }
        else{
            int ope1=st.top();          //agr operator hai toh
            st.pop();
            int ope2=st.top();
            st.pop();
            
        switch(s[i]){
            
            case '+':
            st.push(ope1+ope2);
            break;
            
            case '-':
            st.push(ope1-ope2);
            break;
            
            case '*':
            st.push(ope1*ope2);
            break;
            
            case '/':
            st.push(ope1/ope2);
            break;
            
            case '^':
            st.push(pow(ope1,ope2));
            break;
            
        }    
            
        }
        
    }
    return st.top();       //hamara integer
}
 

int main()
{
    cout<<PrefixExpression("-+7*45+20")<<endl;

    return 0;
}
