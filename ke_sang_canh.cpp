#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int g, e;
        cin>>g>>e;
        vector < int > store[1005];
        for(int i=0;i<e;i++){
            int x, y;
            cin>>x>>y;
            store[x].push_back(y);
            store[y].push_back(x);
        }
        for(int i=1;i<=g;i++){
            cout<<i<<": ";
            for(int j=0;j<store[i].size();j++){
                cout<<store[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}