//matrix search

#include <iostream>

using namespace std;

int main(){

    int m,n;
    cin>>m>>n;
    
    int key;
    cout<<"enter the key ";
    cin>>key;
    
    int a[m][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
      }
    }
    
    int r=0,c=n-1;
    bool found=false;
    while(r<n && c>=0){
        if(a[r][c]==key){
            found=true;
            cout<<r<<" "<<c<<endl;
        }
       if(a[r][c]>key){
        c--;
        }
       else{
        r++;
        }
    }
    if(found)
    cout<<"element found ";
    else{
    cout<<"element does not exist ";
    }
    

    
    
    
  return  0;
}
