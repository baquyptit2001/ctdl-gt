#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a>b){
        int tmp = a;
        a=b;
        b= tmp;
    }
    int tong=0,count=0, i; 
    for(i=a;i<=b;i++){
        if(i%2==1){
            tong+=i;
            count++;
        }
    }
    printf("%d %d", count, tong);
    return 0;
}