#include<stdio.h>
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    if (n<30)
    {
        for (i = 1; i <= n; i++)
        {
            count = count + (i*i);
        }
        printf("%d", count);
    }
    
    
    return 0;
}