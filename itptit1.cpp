#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int store[n+2], maxx, minn;
        for(int i=0;i<n;i++){
            cin>>store[i];
            if(store[i]==n)
                maxx=i;
            if(store[i]==1)
                minn=i;
        }
        int to = (maxx>minn) ? maxx : minn;
        int be = (maxx<minn) ? maxx : minn;
        int res = min(to+1, n-be);
        res=min(res,be+1+n-to);
        cout<<res<<endl;
    }
    return 0;
}