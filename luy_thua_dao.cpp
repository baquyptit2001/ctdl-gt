#include<bits/stdc++.h>

using namespace std;

#define m 1000000007

long long exp(long long x, long long n){
    if(n == 1) return x;
    long long t = exp(x, n/2);
    if(n % 2 == 0) return t % m * t % m;
    return t % m * t % m * x % m;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b=0, k;
        cin>>a;
        k=a;
        while(k>0){
            b=b*10+k%10;
            k/=10;
        }
        cout<<exp(a,b)<<endl;
    }
}