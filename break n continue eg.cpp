
#include <iostream>

using namespace std;

int main()
{
    int pocketmoney=3000,date;
    
    for (date=1;date<=30;date++)
{
    if (date%2==0){
        continue;               //continue is used to skip to the next iteration of the loop
    }
    if (pocketmoney==0){
     break;                     //break is used to terminate the loop
    }
    cout<<"Go out today"<<endl;
    pocketmoney=pocketmoney-300;
}
    return 0;
}
