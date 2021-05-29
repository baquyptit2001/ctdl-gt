#include<bits/stdc++.h> 

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    stack<int> store;
    while(cin>>s){
        if(s == "push"){
            int x;
            cin>>x;
            store.push(x);
        }
        else if(s == "pop"){
            if(!store.empty())
                store.pop();
        }
        else{
            if(store.empty()){
                cout<<"empty"<<endl;
                continue;
            }
            stack<int> tmp = store;
            vector<int> v;
            while(!tmp.empty()){
                v.push_back(tmp.top());
                tmp.pop();
            }
            for(int i=v.size()-1;i>=0;i--)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}