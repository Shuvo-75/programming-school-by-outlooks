#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int first = N/100;
    int second = N%100;
    printf("%d\n%d", first, second);
    
    return 0;
}