#include<stdio.h>

typedef struct {
    int cac;
}SV;


int main() {
    SV a[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", & a[i].cac);
    }
    for (i = 9; i > -1; i--) {
        printf("%d ", a[i].cac);
    }
}