#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string begin="", end="";
        for(int i=0;i<k;i++){
            begin+=('A'+i);
            end+=('A'-k+n+i);
        }
        cout<<begin<<endl;
        while(end!=begin){
            for(int i=k-1;i>=0;i--){
                if(begin[i]<('A'+n-k+i)){
                    begin[i]+=1;
                    for(int j=i+1;j<k;j++){
                        begin[j]=begin[i]+j-i;
                    }
                    break;
                }
            }
            cout<<begin<<endl;
        }
    }
    return 0;
}