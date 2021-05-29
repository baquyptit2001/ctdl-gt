#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, res=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==k)
                res++;
        }
        if(res==0)
            res=-1;
        cout<<res<<endl;
    }
    return 0;
}