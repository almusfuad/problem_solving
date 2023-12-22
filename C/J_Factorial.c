#include<stdio.h>

long long int fun (int n)
{
    if(n==0) return 1;

    long long int res = fun(n-1);
    return n*res;
}

int main ()
{
    int n;
    scanf("%d", &n);

    long long int ans = fun(n);
    printf("%lld", ans);
    return 0;
}