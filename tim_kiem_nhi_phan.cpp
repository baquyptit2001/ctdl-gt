#include<iostream>

using namespace std;

// int search(int a[], int l, int r, int x){
//     if(r>=l){
//         int mid = l+(r-l)/2;
//         if(a[mid]==x)
//             return mid;
//         if(a[mid]>x)
//             return search(a,l,mid-1,x);
//         return search(a, mid+1,r,x);
//     }
//     return -1;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, x, res=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==k&&res==0){
                res=i+1;
            }
        }
        if(res!=0)
            cout<<res;
        if(res==0)
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}