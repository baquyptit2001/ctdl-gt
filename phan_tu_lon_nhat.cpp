#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<k;i++)
            cout<<a[n-1-i]<<" ";
        cout<<endl;
    }
    return 0;
}