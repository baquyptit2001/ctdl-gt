#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, res=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1)
                continue;
            res++;
        }
        cout<<res<<endl;
    }
    return 0;
}