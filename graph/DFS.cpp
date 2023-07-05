/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void dfs(int i, vector<int>vis, vector<int>adj[], vector<int> storedfs){
    storedfs.push_back(i);
    vis[i]=1;
    for(auto it:adj[i]){
        if(!vis[it]){
        dfs(it, vis, adj, storedfs);
        }
    }
}

vector<int>dfsOfGraph(int v, vector<int> adj[]){
    vector<int>storedfs;
    vector<int>vis(v+1,0);
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            dfs(i,vis,adj,storedfs);
        }
    }
    return storedfs;
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> ans;
    
    ans=dfsOfGraph(n,adj);
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}
