#include<stdio.h>
int main()
{
    double L, N;
    scanf("%lf %lf", &L, &N);
    double radius = (N/(2*3.1416))/L;
    printf("%0.2lf km",radius);
    return 0;
}