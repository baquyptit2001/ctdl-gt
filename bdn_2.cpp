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
        queue <long long> que;
        que.push(1);
        int res=0;
        while(1){
            res++;
            long long front=que.front();
            if(not(front%n)){
                cout<<front<<endl;
                break;
            }
            que.pop();
            que.push(front*10);
            que.push(front*10+1);
        }
    }
    return 0;
}