#include<bits/stdc++.h>

using namespace std;

#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long res=0;
        for(int i=0;i<n;i++){
            res=(res%mod+((a[i]%mod)*(i%mod))%mod)%mod;
            // res=(res%mod+((a[n-i-1]%mod)*((n-i-1)%mod))%mod)%mod;
        }
        // if(n%2==1)
        //     res=(res%mod+((a[n/2]%mod)*((n/2)%mod))%mod)%mod;
        cout<<res<<endl;
    }
    return 0;
}