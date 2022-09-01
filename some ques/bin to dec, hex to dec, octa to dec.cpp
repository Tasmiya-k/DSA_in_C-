//binary to decimal

#include <bits/stdc++.h>

using namespace std;

int binarytodecimal(int n){
    int ans=0;
    int x=1;
    
    while(n>0){
        int y=n%10;
        ans=ans+x*y;
        x=x*2;                       //base
        n=n/10;
    }
    return ans;
}

int hexadecimaltodecimal(string s){
    int ans=0;
    int x=1;
    
    int l=s.size();
    for(int i=l-1; i>=0; i--){
        
        if(s[i]>='0' && s[i]<='9'){
            ans=ans+x*(s[i]-'0');
        }
        
        else if(s[i]>='A' && s[i]<='F'){
            ans=ans+x*(s[i]-'A' + 10);
        }
        x*=16;
    }
    return ans;
}

int octaltodecimal(int n){
    int ans=0;
    int x=1;
    
    while(n>0){
        int y=n%10;
        ans=ans+x*y;
        x=x*8;                       //base
        n=n/10;
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;
  // cout<<binarytodecimal(n)<<endl;
   //cout<<octaltodecimal(n);
   cout<<hexadecimaltodecimal(s);

    return 0;
}
