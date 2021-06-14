#include<bits/stdc++.h>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector < stack<long long> > store;
        long long num[n+5][2];
        char crt[n+5];
        for(int i=0;i<n;i++){
           cin>>num[i][0]>>num[i][1]>>crt[i];
        }
        for(int i=0;i<n;i++){
            long long a=num[i][0], b=num[i][1];
            char c=crt[i];
            if(c=='L'){
                bool check = true;
                for(long long i=0;i<store.size();i++){
                    if(store[i].top()==a){
                        store[i].push(b);
                        check = false;
                        break;
                    }
                }
                if(check){
                    stack <long long> tmp;
                    tmp.push(b);
                    store.push_back(tmp);
                }
                continue;
            }
            if(c=='R'){
                for(int i=0;i<store.size();i++){
                    if(store[i].top()==a){
                        store.erase(store.begin()+i);
                        break;
                    }
                }
            }
        }
        long long res=0;
        for(long long i=0;i<store.size();i++)
            res+=store[i].top();
        cout<<res<<endl;
    }
    return 0;
}