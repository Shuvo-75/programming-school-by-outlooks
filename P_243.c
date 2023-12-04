#include<stdio.h>
int main()
{
    int M, E, B;
    scanf("%d %d %d", &M, &E, &B);
    int fail = (M-B) + (E-B) + B;
    int pass = 100 - fail;
    printf("%d%%", pass);
    return 0;
}