/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     int n,k;
    cin>>n>>k;
	char a[n];
	
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	int kcount=0, tcount=0,index=0;
	
	for(int i=0;i<n;i++){
	    if(a[i]=='P'){
	        index=i;
	        while(kcount<=k){
	            if (a[index+1]=='T'){
	                tcount++;
	                break;
	            }
	            else if(a[index-1]=='T'){
	                tcount++;
	                break;
	            }
	            else{
	                kcount++;
	                index++;
	            }
	        }
	    }
	}
	
	cout<<tcount;
    return 0;
}
