#include<iostream>
#include<algorithm>

using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx, swaped, step=1;
    for (i = 0; i < n-1; i++)
    {
        swaped=0;
        min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx]){
            min_idx = j;
            swaped=1;
        }
        swap(arr[min_idx], arr[i]);
        cout<<"Buoc "<<step<<": ";
        for(j=0;j<n;j++)
            cout<<arr[j]<<' ';
        step++;
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n+2], i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    selectionSort(a,n);
    return 0;
}