#include<stdio.h>
int main()
{
    int L, W;
    scanf("%d %d", &L, &W);
    if (L<100 && W<100)
    {
        printf("%d", L*W);
    }
    
    return 0;
}