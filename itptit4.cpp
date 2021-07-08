#include<bits/stdc++.h>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,x,y;
        cin>>a>>b>>x>>y;
        if(x==0 or y == 0){
            cout<<0<<endl;
            continue;
        }
        long long to, be;
        to = (a>b) ? a:b;
        be = (a<b) ? a:b;
        long long res1=x*(a+b);
        long long res2=(to-be)*x+to*y;
        long long res3=(to-be)*x+be*y;
        long long res = min(res1,res2);
        res=min(res,res3);
        cout<<res<<endl;
    }
    return 0;
}