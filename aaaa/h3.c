#include<stdio.h>

void swap(float *xp, float *yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(float arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

void printArray(float arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%.3f ", arr[i]);
}

int main(){
    int n, i;
    scanf("%d", &n);
    float a[100];
    for(i=0;i<n;i++)
        scanf("%f", &a[i]);
    bubbleSort(a,n);
    printArray(a,n);
    return 0;
}