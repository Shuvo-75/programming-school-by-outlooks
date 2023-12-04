#include<stdio.h>
int main()
{
    int n;
    scanf("%lld", &n);
    if (1<n && n<30)
    {
        int final = (((((n*567)/9)+7492)*235)/47)-498;
        printf("%d", final);
    }
    
    
    return 0;
}