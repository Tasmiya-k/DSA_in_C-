//maximum occurence in the string 

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int freq[26]={0};
    
    
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    
    char ans;
    int maxF=0;
    
    for(int i=0;i<26;i++){
        if(freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';
        }
    }
       cout<<maxF<<" "<<ans<<endl;
    
    return 0;
}
