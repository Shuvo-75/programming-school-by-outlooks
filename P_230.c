#include<stdio.h>
int main()
{
    float u, v, t;
    scanf("%f %f %f", &u, &v, &t);
    float a = (v-u)/t;
    float s = ((u+v)/2)*t;
    printf("%0.1f\n%0.1f", a, s);
    return 0;
}