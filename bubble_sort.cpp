#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+2], dem=1;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        int doi=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int tmp = a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                doi=1;
            }
        }
        if(doi){
            cout<<"Buoc "<<dem++<<": "; 
            for(int j=0;j<n;j++)
                cout<<a[j]<<' ';
            cout<<endl;
        }
    }
    return 0;
}