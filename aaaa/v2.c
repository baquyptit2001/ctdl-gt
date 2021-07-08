#include<stdio.h>

struct ht
{
    int code, x, y;
    float bk;
};

void swap(struct ht *xp, struct ht *yp)
{
    struct ht temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(struct ht arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j].bk < arr[j+1].bk)
            swap(&arr[j], &arr[j+1]);
}

int main(){
    int n,i;
    struct ht store[100];
    scanf("%d", &n);
    struct ht Ht;
    int i=0;
    for(i=0;i<n;i++)
        scanf("%d%d%d%f", &store[i].code, &store[i].x, &store[i].y, &store[i].bk);
    bubbleSort(store, n);
    printf("Danh sach hinh tron da sap xep: %d\n", n);
    for(i=0;i<n;i++)
        printf("%d %d %d %.3f\n", store[i].code, store[i].x, store[i].y, store[i].bk);
    return 0;
}