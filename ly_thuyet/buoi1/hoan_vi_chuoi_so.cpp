#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int index;
        string store, tmp;
        cin>>index>>store;
        tmp=store;
        for(int i=store.length()-2;i>=0;i--){
            if(store[i]<store[i+1]){
                int k = i+1;
                char maxChar = store[i+1];
                for(int j=i+2;j<store.length();j++){
                    if(store[j]<=maxChar and store[j]>store[i]){
                        k=j;
                    }
                }
                swap(store[k],store[i]);
                reverse(store.begin()+i+1,store.end());
                break;
            }
        }
        if(tmp==store){
            cout<<index<<" BIGGEST"<<endl;
        }else
            cout<<index<<' '<<store<<endl;
    }
    return 0;
}