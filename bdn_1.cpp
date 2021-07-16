#include<bits/stdc++.h> 

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        queue<long long> q;
        q.push(1);
        int res = 0;
        while(not q.empty()){
            res++;
            long long t = q.front();
            if(t>n){
                cout<<res-1<<endl;
                break;
            }
            q.pop();
            q.push(t*10);
            q.push(t*10+1);
        }
    }
    return 0;
}