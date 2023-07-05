//permutation of string

#include <iostream>
#include<string.h>

using namespace std;

void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
    }
    for(int i=0; i<s.length(); i++){
        char c=s[i];
        string res=s.substr(0,i)+s.substr(i+1);
        
        permutation(res, ans+c);
    }
}

int main()
{
    string s="SAHI";
    permutation(s, "");


    return 0;
}
