#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=0;
        while(n--){
            int x;
            cin>>x;
            if(x!=0)
                break;
            res++;
        }
        cout<<res<<endl;
    }
    return 0;
}