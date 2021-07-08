#include<stdio.h>
#include<string.h>

int main(){
    char s1[100], s2[100];
    scanf("%s%s", &s1, &s2);
    int i, dk=0;
    for(i=strlen(s1)-1;i>=0;i--){
        if(s1[i]!='0')
            dk=1;
        if(dk)
            printf("%c", s1[i]);
    }
    printf("\n");
    dk=0;
    for(i=strlen(s2)-1;i>=0;i--){
        if(s2[i]!='0')
            dk=1;
        if(dk)
            printf("%c", s2[i]);
    }
    return 0;
}