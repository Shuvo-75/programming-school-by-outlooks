#include<stdio.h>
int main()
{
    int N, M, i=1;
    while (i!=4)
    {
        scanf("%d %d", &N, &M);
        printf("%d\n", N*M);
        i++;
    }
    return 0;
}