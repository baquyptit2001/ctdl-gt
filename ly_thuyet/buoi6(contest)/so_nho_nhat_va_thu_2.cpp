#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, n1=INT_MAX, n2=-1;
        cin>>n;
        int a[n+2];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }       
        sort(a,a+n);
        if(a[0]==a[n-1])
            cout<<-1;
        else{
            cout<<a[0]<<' ';
            for(int i=1;i<n;i++){
                if(a[i]>a[0]){
                    cout<<a[i];
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}