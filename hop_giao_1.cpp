#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        set<int> store;
        int giao[a+b+2], g=0;
        for(int i=0;i<a+b;i++){
            int x;
            cin>>x;
            int k = store.size();
            store.insert(x);
            if(k==store.size())
                giao[g++]=x;
        }
        set<int>::iterator it;
        for (it = store.begin(); it !=store.end(); it++)
            cout << *it<< ' ';
        cout<<endl;
        sort(giao,giao+g);
        for(int i=0;i<g;i++)
            cout<<giao[i]<<' ';
        cout<<endl;
    }
    return 0;
}