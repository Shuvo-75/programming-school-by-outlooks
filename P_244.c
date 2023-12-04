#include<stdio.h>
int main()
{
    long long int M, N;
    scanf("%lld %lld", &M, &N);
    long long int Rima = N - M;
    long long int Tina = 3*Rima;
    printf("%lld", Rima+Tina+M);
    return 0;
}