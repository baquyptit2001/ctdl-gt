#include<stdio.h>

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
            int tmp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=tmp;
            printf("Buoc %d: ", step);
            for(j=0;j<n;j++)
                printf("%d ", arr[j]);
            step++;
            printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n+2], i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    selectionSort(a,n);
    return 0;
}