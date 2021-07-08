#include<stdio.h>


typedef struct{
    int mnv;
    char ten[100];
    double luong, hs;
}NV;

int main(){
    int n, i;
    scanf("%d", &n);
    NV nv[500];
    for(i=0;i<n;i++){
        scanf("%d %s %lf %lf", &nv[i].mnv, &nv[i].ten, &nv[i].hs, &nv[i].luong);
    }
    for(i=0;i<n;i++){
        printf("%d %s %.2lf %.2lf %.2lf\n", nv[i].mnv, nv[i].ten, nv[i].hs, nv[i].luong, (nv[i].hs*200000)+nv[i].luong);
    }
}