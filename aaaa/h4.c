#include<stdio.h>
 
int main(){
    double a1, b1, c1, a2, b2, c2;
    double D, Dx, Dy, x, y;
    scanf("%lf%lf%lf", &a1, &b1, &c1);
    scanf("%lf%lf%lf", &a2, &b2, &c2);
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0) {
        if (Dx + Dy == 0)
            printf("VN");
        else
            printf("VSN");
    }
    else {
        x = Dx / D;
        y = Dy / D;
        printf("%.5lf %.5lf", x, y);
    }
    return 0;
}