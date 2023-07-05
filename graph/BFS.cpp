//BFS Traversal

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define M 10

vector<int> bfsOfGraph(int v, vector<int>adj[]){
    vector<int>bfs;
    vector<int>vis(v+1,0);
    
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            queue<int>q;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                
                for(auto it: adj[node]){
                    if(!vis[it]){
                        vis[it]=1;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs;
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
    
    ans=bfsOfGraph(n,adj);
    for(auto i: ans){
        cout<<i<<" ";
    }
    // for(int i=0; i<n+1; i++)
    // {
    //   cout<<i<< " ";

    //     for(int j=0; j<adj[i].size(); j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }

    //     cout<< endl;
    // }

    return 0;
}
