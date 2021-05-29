#include<bits/stdc++.h>

using namespace std;

int check(string s, int k){
    stringstream sso;
    sso << s;
    long long n;
    sso>>n;
    if(n%k==0)
        return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue <string> q1, q2;
        q1.push("9");
        string res="";
        while(res==""){
            while(!q1.empty()){
                if(check(q1.front(), n)){
                    res = q1.front();
                    break;
                }
                q2.push(q1.front()+'0');
                q2.push(q1.front()+'9');
                q1.pop();
            }
            if(res!="")
                break;
            while(!q2.empty()){
                if(check(q2.front(), n)){
                    res = q2.front();
                    break;
                }
                q1.push(q2.front()+'0');
                q1.push(q2.front()+'9');
                q2.pop();
            }
        }
        cout<<res<<endl;
    }
    return 0;
}