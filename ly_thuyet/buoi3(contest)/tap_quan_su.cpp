#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[k], b[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        int mark=1, dem=0;
        for(int i=k-1;i>=0;i--){
            if(a[i]<n-dem){
                a[i]++;
                int plus=1;
                for(int j=i+1;j<k;j++){
                    a[j]=a[i]+plus;
                    plus++;
                }
                mark=0;
                break;
            }
            dem++;
        }
        int res=0;
        if(mark){
            res=k;
        }
        else{
            for(int i=0;i<k;i++){
                for(int j=0;j<k;j++){
                    if(b[i]==a[j]){
                        break;
                    }
                    if(j==k-1)
                        res++;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}