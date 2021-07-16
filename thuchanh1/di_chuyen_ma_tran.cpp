#include<bits/stdc++.h>

using namespace std;

int n, m, ans, a[105][105];

void Try(int i, int j){
    if(i==n and j==m){
        ans++;
        return;
    }
    if(i<n)
        Try(i+1,j);
    if(j<m)
        Try(i,j+1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }
        Try(1,1);
        cout<<ans<<endl;
    }
    return 0;
}