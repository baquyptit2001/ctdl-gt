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
        long long a[n+5], b[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        long long res=0;
        for(int i=0;i<n;i++){
            res+=a[i]*b[n-1-i];
        }
        cout<<res<<endl;
    }
    return 0;
}