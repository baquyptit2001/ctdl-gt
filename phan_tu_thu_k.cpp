#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n, k;
        cin>>m>>n>>k;
        int a[m+n+2];
        for(int i=0;i<m+n;i++){
            cin>>a[i];
        }
        sort(a,a+m+n);
        cout<<a[k-1]<<endl;
    }
    return 0;
}