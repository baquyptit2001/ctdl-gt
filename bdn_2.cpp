#include<bits/stdc++.h> 

using namespace std;

void check(){
    int n;
    cin>>n;
    queue<long long> q;
    q.push(1);
    while(!q.empty()){
        long long t = q.front();
        if(t%n==0){
            cout<<t<<endl;
            return;
        }
        q.pop();
        q.push(t*10);
        q.push(t*10+1);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        check();
    }
}