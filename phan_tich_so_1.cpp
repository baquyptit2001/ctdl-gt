#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> store;
        store.push_back(n);
        cout<<"("<<n<<") ";
        while(store[0]!=1){
            for(int i=store.size()-1;i>=0;i--){
                if(store[i]!=1){
                    if(i==0){
                        int k=store[0]-1;
                        store.clear();
                        store.push_back(k);
                        if((n-k)<(k))
                            store.push_back(n-k);
                        else{
                            int left=n-k;
                            while(left>=k){
                                left-=(k);
                                store.push_back(k);
                            }
                            if(left>0)  
                                store.push_back(left);
                        }
                    }else{
                        if(i==store.size()-1 or store[i]==2){
                            store[i]--;
                            store.push_back(1);
                        }else{
                            store[i]--;
                            store[i+1]++;
                        }
                    }
                    break;
                }
            }
            cout<<"(";
            for(int i=0;i<store.size();i++){
                cout<<store[i];
                if(i!=store.size()-1)
                    cout<<' ';
            }
            cout<<") ";
        }
        cout<<endl;
    }
    return 0;
}