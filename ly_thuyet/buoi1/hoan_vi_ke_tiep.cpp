#include<iostream>
#include<algorithm>

using namespace std;

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
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
        if(mark){
            for(int i=n;i>0;i--)
                cout<<i<<' ';
        }
        else{
            for(int i=0;i<n;i++)
                cout<<a[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}