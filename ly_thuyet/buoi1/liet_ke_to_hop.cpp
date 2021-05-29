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
            a[i]=i+1;
        }
        for(int j=0;j<k;j++)
            cout<<a[j];
        cout<<" ";
        while(1){
        int mark=1, dem=0;
            for(int i=k-1;i>=0;i--){
                if(a[i]<n-dem){
                    a[i]++;
                    int plus=1;
                    for(int j=i+1;j<k;j++){
                        a[j]=a[i]+plus;
                        plus++;
                    }
                    for(int j=0;j<k;j++)
                        cout<<a[j];
                    cout<<" ";
                    mark=0;
                    break;
                }
                dem++;
            }
            if(mark)
                break;
        }
        cout<<endl;
    }
    return 0;
}