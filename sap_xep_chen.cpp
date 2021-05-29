#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n+2], dem=0;
    for(int i=0;i<n;i++){
        b[dem++]=a[i];
        sort(b,b+dem);
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<dem;j++){
            cout<<b[j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}