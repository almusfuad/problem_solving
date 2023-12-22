#include<stdio.h>
int main ()
{
    int test;
    scanf("%d", &test);

    long long int sum, a, b, c, d;
    while(test !=0)
    {
        scanf("%lld %lld %lld %lld", &sum, &a, &b, &c);

        d = sum - (a+b+c);
        printf("%lld\n", d);
        test--;
    }
    return 0;
}