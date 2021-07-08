#include<stdio.h>

struct ht
{
    int code, x, y;
    float bk;
};

long long dup(int x){
    return x*x;
} 

int main(){
    int n,i;
    struct ht res;
    scanf("%d", &n);
    struct ht Ht;
    scanf("%d%d%d%f", &Ht.code, &Ht.x, &Ht.y, &Ht.bk);
    res = Ht;
    long long max = dup(res.x)+dup(res.y);
    for(i=1;i<n;i++){
        struct ht Ht;
        scanf("%d%d%d%f", &Ht.code, &Ht.x, &Ht.y, &Ht.bk);
        if(dup(Ht.x)+dup(Ht.y)>max)
            res = Ht;
    }
    printf("%d %d %d %.3f", res.code, res.x, res.y, res.bk);
    return 0;
}