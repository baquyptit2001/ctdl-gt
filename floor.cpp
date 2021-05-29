#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        long long res = -1;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x<=k)
                res=i+1;
        }
        cout<<res<<endl;
    }
    return 0;
}