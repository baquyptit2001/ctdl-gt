#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+2], b[n+2];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=0;
        for(int i=0;i<n-1;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(b[i]!=a[i]){
                res=i+1;
                break;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}