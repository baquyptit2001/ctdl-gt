#include<iostream>
#include<map>

using namespace std;

int search(int a[], int n, int k){
    map<int,int> m;
    for(int i=0;i<n;i++)
        m[a[i]]++;
    int res=0;
    for(int i=0;i<n;i++){
        res+=m[k-a[i]];
        if(k-a[i]==a[i])
            res--;
    }
    return res/2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int res=search(a,n,k);
        cout<<res<<endl;
    }
    return 0;
}