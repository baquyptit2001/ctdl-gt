#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int res=0;
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
            if(a[i+1]!=a[i])
                res+=(a[i+1]-a[i]-1);
        cout<<res<<endl;
    }
    return 0;
}