#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        if(k>n){
            cout<<0<<endl;
            continue;
        }
        long long res = 1;
        for(int i=0;i<k;i++){
            res*= (n-i)%mod;
            res%=mod;
        }
        cout<<res<<endl;
    }
    return 0;
}