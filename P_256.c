#include<stdio.h>
int main()
{
    double X, W, L, H;
    scanf("%lf %lf %lf %lf", &X, &W, &L, &H);
    double v = W*L*H;
    double x_1 = (X * 1)/1000;
    double total = (v*x_1)/0.000001;
    printf("%0.2lf kg",total);
    return 0;
}