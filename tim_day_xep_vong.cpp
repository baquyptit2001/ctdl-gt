#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, x, res=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==k&&res==0){
                res=i+1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}