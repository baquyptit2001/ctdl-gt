#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stack <int> stk;
        int res=1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                stk.push(res);
                cout<<stk.top()<<"  ";
                res++;
            }
            if(s[i]==')'){
                cout<<stk.top()<<"  ";
                stk.pop();
            }
        }   
        cout<<endl;
    }
    return 0;
}