#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    deque <int> dq;
    while(t--){
        string s;
        cin>>s;
        if(s[1]=='U'){
            int x;
            cin>>x;
            if(s[4]=='F')
                dq.push_front(x);
            if(s[4]=='B')
                dq.push_back(x);
        }else if(s[1]=='O'){
            if(!dq.empty()){
                if(s[3]=='F')
                    dq.pop_front();
                if(s[3]=='B')
                    dq.pop_back();
            }
        }else{
            if(dq.empty())
                cout<<"NONE"<<endl;
            else{
                if(s[5]=='F')
                    cout<<dq.front()<<endl;
                if(s[5]=='B')
                    cout<<dq.back()<<endl;
            }
        }
    }
    return 0;
}