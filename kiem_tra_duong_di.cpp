#include<bits/stdc++.h>

using namespace std;

bool visited[1005];
vector <int> store[1005];
bool res=false;

void DFS(int start, int end){
    visited[start]=true;
    if(start==end){
        res=true;
        return;
    }
    for(int i=0;i<store[start].size();i++){
        if(not visited[store[start][i]]){
            DFS(store[start][i], end);
        }
    }
}

void init(int v){
    memset(visited, false, sizeof(visited));
    for(int i=1;i<=v;i++)
        store[i].clear();
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int v, e;
        cin>>v>>e;
        init(v);
        for(int i=0;i<e;i++){
            int x, y;
            cin>>x>>y;
            store[x].push_back(y);
            store[y].push_back(x);
        }
        int q;
        cin>>q;
        while(q--){
            res=false;
            memset(visited, false, sizeof(visited));
            int start, end;
            cin>>start>>end;
            DFS(start, end);
            if(res)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}