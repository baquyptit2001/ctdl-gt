#include<iostream>
#include<cmath>

using namespace std;

int nt(int n){
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=-1;
        for(int i=2;i<=n/2;i++){
            if(nt(i)&&nt(n-i)){
                res=i;
                break;
            }
        }
        cout<<res;
        if(res!=-1)
            cout<<' '<<n-res;
        cout<<endl;
    }
    return 0;
}