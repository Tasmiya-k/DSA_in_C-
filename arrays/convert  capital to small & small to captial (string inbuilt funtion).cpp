//convert string into upper case & lower case (using in-built funtion)

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str="asdfghjkl";
    
    transform(str.begin(), str.end(), str.begin,::toupper);
    cout<<str<<endl;
   
   
    transform(str.begin(), str.end(), str.begin,::tolower);
    cout<<str<<endl;
   
    return 0;
}
