#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    list <int> store;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        store.push_back(x);
    }
    int k;
    cin>>k;
    store.remove(k);
    list <int> ::iterator it;
    for(it = store.begin(); it!= store.end();it++)
        cout<<*it<<' ';
    return 0;
}