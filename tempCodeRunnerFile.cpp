#include<bits/stdc++.h> 

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        queue<long long> q;
        q.push(1);
        int res = 0;
        while(!q.empty()){
            res++;
            long long t = q.front();
            if(t>n){
                cout<<res-1<<endl;
                continue;
            }
            q.pop();
            q.push(t*10);
            q.push(t*10+1);
        }
    }
    return 0;
}