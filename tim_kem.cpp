#include<iostream>
#include<algorithm>

using namespace std;

int search(int a[], int l, int r, int x){
    if(r>=l){
        int mid = l+(r-l)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return search(a,l,mid-1,x);
        return search(a,mid+1,r,x);
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int res = (search(a,0,n-1,x)==-1) ? -1:1;
        cout<<res<<endl;
    }
    return 0;
}