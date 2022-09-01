//postfix evalution

#include <iostream>
#include<stack>
#include<string>
#include<math.h>

using namespace std;

int postfixEvaluation(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9')            //ye ek char hai 
        st.push(s[i]-'0');            //isse char int ban jaenga
        
        else{
            int ope2=st.top();
            st.pop();
            int ope1=st.top();
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
    
    return st.top();
}

int main()
{
    string  s=("46+2/5*7+");
   cout<<postfixEvaluation(s);

    return 0;
}
