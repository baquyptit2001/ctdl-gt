#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string store;
        getline(cin, store);
        stringstream sso(store);
        int count=0;
        string res[1000];
        while(sso>>res[count]){
            count++;
        }
        for(int i=count-1;i>=0;i--){
            cout<<res[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}