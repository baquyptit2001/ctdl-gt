#include<iostream>

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
        int mark = search(a,0,n-1,x);
        if(mark==-1)
            cout<<-1<<endl;
        else{
            for(int i=mark;i>=0;i--)
                if(i==0||a[i-1]!=x){
                    mark=i;
                    break;
                }
            int res=0;
            for(int i=mark;i<n;i++)
                if(a[i]==x)
                    res++;
                else
                    break;
            cout<<res<<endl;
        }
    }
    return 0;
}