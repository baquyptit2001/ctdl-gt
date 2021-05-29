#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin.ignore();
        getline(cin, s);
        string store[1000];
        int n=0;
        stringstream sso(s);
        while(sso>>store[n])
            n++;
        for(int i=n-1;i>=0;i--)
            cout<<store[i]<<' ';
        cout<<endl;
    }
    return 0;
}