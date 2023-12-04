#include<stdio.h>
int main()
{
    double M, N;
    scanf("%lf %lf", &M, &N);
    double length = sqrt(N/(3*M));
    double width = 3 * length;
    printf("The length is %0.2lf meter\nThe width is %0.2lf meter", length, width);
    return 0;
}