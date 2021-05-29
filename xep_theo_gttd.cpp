#include<iostream>
#include<cmath>

using namespace std; 

void bubbleSort(int a[], int n, int k)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)  
    for (j = 0; j < n-i-1; j++)  
        if (abs(a[j]-k) > abs(k-a[j+1])){
            swap(a[j],a[j+1]);
        }
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
        bubbleSort(a,n,k);
        for(int i=0;i<n;i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}