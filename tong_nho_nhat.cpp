#include<bits/stdc++.h>

using namespace std;

long long s2n(string s){
    stringstream sso;
    sso<<s;
    long long res;
    sso>>res;
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <char> store;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            if(c!='0')
                store.push_back(c);
        }
        sort(store.begin(),store.end());
        string s1="", s2="";
        for(int i=0;i<store.size();i++){
            if(i%2==0)
                s1+=store[i];
            else
                s2+=store[i];
        }
        cout<<s2n(s1)+s2n(s2)<<endl;
    }
    return 0;
}