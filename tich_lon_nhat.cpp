#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long t2 = max(a[0]*a[1], a[n-1]*a[n-2]);
    long long t3 = max(a[0]*a[1]*a[2], a[n-1]*a[n-2]*a[n-3]);
    if(a[0]*a[1]*a[n-1] > t3)
        t3 = a[0]*a[1]*a[n-1];
    cout<<max(t2,t3)<<endl;
    return 0;
}