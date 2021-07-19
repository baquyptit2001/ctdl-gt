#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], res[100000][n], dem=0;
        for(int i=0;i<n;i++)
            a[i]=i+1;
        for(int i=0;i<n;i++){
            res[dem][i]=a[i];
        }
        dem++;
        while(1){
            int mark=1;
            for(int i=n-2;i>=0;i--){
                if(a[i]<a[i+1]){
                    int k=i+1;
                    for(int j=i+1;j<n;j++){
                        if(a[j]>a[i]&&a[k]>a[j]){
                            k=j;
                        }
                    }
                    swap(a[k],a[i]);
                    reverse(a+i+1,a+n);
                    mark=0;
                    break;
                }
            }
            if(mark)
                break;
            for(int i=0;i<n;i++){
                res[dem][i]=a[i];
            }
            dem++;
        }
        cout<<dem<<endl;
        for(int i=dem-1;i>=0;i--){
            for(int j=0;j<n;j++)
                cout<<res[i][j];
            cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}