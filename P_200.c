/*
//200, 201 
#include<stdio.h>
int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("%d", sum);
    return 0;
}

//202, 205
#include<stdio.h>
int main()
{
    int a, b, multiply;
    scanf("%d %d", &a, &b);
    multiply = a*b;
    printf("%d", multiply);
    return 0;
}

//203
#include<stdio.h>
int main()
{
    int a, b, sub;
    scanf("%d %d", &a, &b);
    sub = a-b;
    printf("%d", sub);
    return 0;
}

//204
#include<stdio.h>
int main()
{
    int a, b, c, d, sub, mul_1, mul_2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    mul_1 = a*b;
    mul_2 = c*d;
    sub = mul_1 - mul_2;
    printf("%d", sub);
    return 0;
}

//206
#include<stdio.h>
int main()
{
    int m, n, o, p, sub1, sub2, sum;
    scanf("%d %d %d %d", &m, &n, &o, &p);
    sub1 = m - n;
    sub2 = o - p;
    sum = sub1 + sub2;
    printf("%d", sum);
    return 0;
}

//207
#include<stdio.h>
int main()
{
    int u, a, t, v;
    scanf("%d %d %d", &u, &a, &t);
    v = u + (a*t);
    printf("%d", v);
    return 0;
}

//208
#include<stdio.h>
int main()
{
    int a, b, square;
    scanf("%d %d", &a, &b);
    square = (a+b)*(a+b);
    printf("%d", square);
    return 0;
}

//210
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int div = n/3;
    printf("%d %d %d", div-1, div, div+1);
    return 0;
}

//211
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int div = n/3;
    printf("%d %d %d", div-2, div, div+2);
    return 0;
}
*/
//212
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int div = n/4;
    if (div%2!=0 && div!=0)
    {
        printf("%d %d %d %d", div-3, div-1, div+1, div+3);
    } else
    {
        printf("%d %d %d %d", div-4, div-2, div+2, div+4);
    }
    
    return 0;
}
