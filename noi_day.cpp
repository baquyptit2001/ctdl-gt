#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        priority_queue< long long,vector<long long>,greater<long long> > store;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            store.push(x);
        }
        long long res=0;
        while(store.size()!=1){
            long long tmp=0;
            for(int i=0;i<2;i++){
                tmp+=store.top();
                store.pop();
            }
            res+=tmp;
            store.push(tmp);
        }
        cout<<res<<endl;
    }
    return 0;
}