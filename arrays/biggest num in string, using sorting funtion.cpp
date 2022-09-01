//Form the biggest number from the numeric string
//simply use sorting funtion

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;
    
    sort(str.begin(), str.end(), greater<int>());    //greater for asending 
    
    cout<<str<<endl;
   
    return 0;
}
