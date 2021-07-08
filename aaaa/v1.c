#include<stdio.h>

void abc(int n)
{
    int k = n;
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    int j;
    printf("%d: ", k);
    for (j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");
}

int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    int i;
    for(i=a;i<=b;i++)
        abc(i);
    return 0;
}