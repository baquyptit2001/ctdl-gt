#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        stack <int> stk;
        stk.push(a[0]);
        for(int i=1;i<n;i++){
            if(stk.empty()){
                stk.push(a[i]);
                continue;
            }
            while(!stk.empty() and stk.top() < a[i]){
                cout<<a[i]<<' ';
                stk.pop();
            }
            stk.push(a[i]);
        }
        while(!stk.empty()){
            cout<< -1 <<' ';
            stk.pop();
        }
        cout<<endl;
    }
    return 0;
}