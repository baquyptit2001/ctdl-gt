#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
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
        if(mark){
            for(int i=1;i<=k;i++){
                cout<<i<<' ';
            }
        }
        else{
            for(int i=0;i<k;i++)
                cout<<a[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}