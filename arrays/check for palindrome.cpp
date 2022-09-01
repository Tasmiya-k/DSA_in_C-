//palindrome check
//nitin=nitin

#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;

char a[n+1];
cin>>a;

bool check=true;
for(int i=0;i<n;i++){
    if(a[i]!=a[n-1-i]){
        check=0;
        break;
    }
}

if(check==true){
    cout<<"word is a palindrome";
}
else{
    cout<<"word is not a palindrome";
}


  return  0;
}
