#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack <int> so;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]>='0' and s[i] <= '9'){
                so.push(s[i]-'0');
            }
            if(s[i] == '+'){
                int s1,s2;
                s1 = so.top();
                so.pop();
                s2 = so.top();
                so.pop();
                so.push(s1+s2);
            }
            if(s[i] == '-'){
                int s1,s2;
                s1 = so.top();
                so.pop();
                s2 = so.top();
                so.pop();
                so.push(s1-s2);
            }
            if(s[i] == '*'){
                int s1,s2;
                s1 = so.top();
                so.pop();
                s2 = so.top();
                so.pop();
                so.push(s1*s2);
            }
            if(s[i] == '/'){
                int s1,s2;
                s1 = so.top();
                so.pop();
                s2 = so.top();
                so.pop();
                so.push(s1/s2);
            }
        }
        cout<<so.top()<<endl;
    }
    return 0;
}