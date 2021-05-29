#include<bits/stdc++.h>

using namespace std;

pair<int,int> doi[100];

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            doi[i].second=x;
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            doi[i].first=x;
        }
        sort(doi,doi+n);
        int res=1, mark=0;
        for(int i=1;i<n;i++){
            if(doi[mark].first<=doi[i].second){
                res++;
                mark=i;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}