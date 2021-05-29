#include<bits/stdc++.h> 

using namespace std;

int Find(long long f,int n,long long k){
    if(k==f/2) return 1;
    if(k==f/2+1) return n;
    if(k>f/2) k = k-f/2-1;
    return Find(f/2,n-1,k);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long f[100];
        f[1]=1;
        for(int i=2;i<=n;i++) 
            f[i]=f[i-1]*2+1;
        cout<<Find(f[n],n,k)<<endl;
    }
}