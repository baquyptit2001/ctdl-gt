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
        int store[n+2];
        for(int i=0;i<n;i++)
            cin>>store[i];
        sort(store, store+n);
        int count=1, maxx=0;
        vector <int> res[10000]; 
        for(int i=1;i<n;i++){
            if(store[i]!=store[i-1]){
                res[count].push_back(store[i-1]);
                maxx = (maxx>count ? maxx : count);
                count=0;
            }
            count++;
        }
        res[count].push_back(store[n-1]);
        maxx = (maxx>count ? maxx : count);
        for(int i=maxx;i>0;i--){
            if(res[i].size()>0){
                for(int j=0;j<res[i].size();j++){
                    for(int k=0;k<i;k++){
                        cout<<res[i][j]<<' ';
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}