#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int sum=0, a[n+2];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        int minus1=0, minus2=0;
        for(int i=0;i<k;i++)
            minus1+=a[i];
        for(int i=0;i<k;i++)
            minus2+=a[n-1-i];
        int res=max(abs((sum-minus1)-minus1),abs((sum-minus2)-minus2));
        cout<<res<<endl;
    }
    return 0;
}