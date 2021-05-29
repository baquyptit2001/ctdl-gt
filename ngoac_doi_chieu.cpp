#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int res = 0;
        stack <char> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                stk.push(s[i]);
            if(s[i] == ')' and not stk.empty()){
                stk.pop();
                res++;
            }
        }
        cout<<(s.length()-res*2)/2<<endl;
    }
    return 0;
}