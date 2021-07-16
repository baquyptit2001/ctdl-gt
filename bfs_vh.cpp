#include<bits/stdc++.h>

using namespace std;

int store[1005][1005], v, e, x, y, u;
bool visited[1005];

void init(){
    memset(store,0,sizeof(store));
    memset(visited, false, sizeof(visited));
    cin>>v>>e>>u;
    for(int i=0;i<e;i++){
        cin>>x>>y;
        store[x][y]=1;
        store[y][x]=1;
    }
}

void BFS(int u){
    queue <int> que;
    que.push(u);
    visited[u] = true;
    while(not que.empty()){
        int current = que.front();
        cout<<current<<' ';
        que.pop();
        for(int i=1;i<=v;i++){
            if(store[current][i] and not visited[i]){
                que.push(i);
                visited[i] = true;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        init();
        BFS(u);
    }
    return 0;
}