#include<bits/stdc++.h> 

using namespace std;

int m =123456789;

long long ex(int n,long long k){
    if(k==0)
        return 1;
    long long s=ex(n,k/2);
    if(k&1)
        return (s*s%m)*n%m;
    else
        return s*s%m;
}

void Res(){
    long long n;
    cin>>n;
    cout<<ex(2,n-1)<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        Res();
    }
}