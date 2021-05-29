#include <bits/stdc++.h>

using namespace std;

int check(string s){
    map<char, int>store;
    int max = 0;
    for(int i=0;i<s.length();i++){
        store[s[i]]++;
        if(store[s[i]]>max)
            max=store[s[i]];
    }
    if(max<=s.length()-max+1)
        return 1;
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<check(s)<<endl;
    }   
    return 0;
}