#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> dau;
        stack<char> chu;
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' and s[i]<='Z')
                chu.push(s[i]);
            else
                dau.push(s[i]);
        }
    }
    return 0;
}