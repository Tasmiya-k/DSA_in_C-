//countPath  in 1-D array 
//eg 1 2 3   count path to reach idx 2  

#include <iostream>
#include<string.h>

using namespace std;

int countPath(int st, int ed){
    if(st==ed) return 1;
    else if(st>ed) return 0;
    
    int count=0;
    for(int i=1; i<=6; i++){
        count+=countPath(st+i, ed);
        // recursion  will return count from 1 to 3
    }
    return count;
}


int main()
{
    int ans=countPath(0, 3);
    //0 to 1 - 1 to 2 - 2 to 3
    //0 to 1 - 1 to 3 
    //0 to 1 - 1 to 2 - 2 to 3 
    //0 to 2 - 2 to 3
    cout<<ans<<endl;


    return 0;
}
