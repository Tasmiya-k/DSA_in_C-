/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

 void getGreater( vector<int>& nums2, vector<int>& greatE) {
  
         stack<int>st;
         int n=nums2.size();
         
         for(int i=n-1; i>=0; i--){
            
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(!st.empty()){
                greatE[i]=st.top();
            }
            else{
                greatE[i]=-1;
            }
            st.push(nums2[i]);
    }
 }


int main()
{
    vector<int>ans;
    vector<int> nums2={1,3,4,2};
    vector<int> greatE(4,0);
    getGreater(nums2, greatE);
    
    for(int i=0; i<greatE.size();i++){
        cout<<greatE[i]<<" ";
    }
    
     

       auto it = find (nums2.begin(), nums2.end(), 4);
       
       if(it!=nums2.end()){
           int index = it - nums2.begin();
           ans.push_back(greatE[index]);
           
       }

       cout<<ans[0]<<" ";
    
    return 0;
}
