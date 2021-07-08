#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack <string> store;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
                string s1 = store.top();
                store.pop();
                string s2 = store.top();
                store.pop();
                string ss = '('+s2+s[i]+s1+')';
                store.push(ss);
            }else{
                store.push(string(1,s[i]));
            }
        }
        cout<<store.top()<<endl;
    }
    return 0;
}