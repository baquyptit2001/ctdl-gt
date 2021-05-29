#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans = 0;
        if(n>m){
            cout<<n-m<<endl;
            continue;
        }
        while(n<m){
            if(m%2)
                m++,ans++;
            else
                m/=2, ans++;
        }
        cout<<ans+n-m<<endl;
    }
    return 0;
}