#include<stdio.h>
int main()
{
    int N, P, D;
    scanf("%d %d %d", &N, &P, &D);
    int val = (D+P)/N;
    printf("%d",val);
    return 0;
}