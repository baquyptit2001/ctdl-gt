#include<stdio.h>

int main(){
    float a[100][100];
    int h,c;
    scanf("%d%d", &h, &c);
    int i, j, res1, res2;
    float max = -99999.0;
    for(i=0;i<h;i++){
        for(j=0;j<c;j++){
            scanf("%f", &a[i][j]);
            if(a[i][j]>max){
                max=a[i][j];
                res1=i, res2=j;
            }
        }
    }
    printf("Phan tu lon nhat chi so hang %d, chi so cot %d, gia tri %.2f", res1, res2, max);
    return 0;
}