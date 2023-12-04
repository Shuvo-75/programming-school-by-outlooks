#include<stdio.h>
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int stranger_value = (M*N)-(M+N);
    printf("%d", stranger_value);
    return 0;
}