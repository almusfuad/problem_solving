#include<stdio.h>
int main ()
{
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (k<=n && k<=m) {
        printf("%lld", k);
    } else if (n<=m && n<=k) {
        printf("%lld", n);
    } else  {
        n = n-m;
        long long int newK = k-m;
        if (newK<=n/2) {
            printf("%lld", k);
        } else {
            printf("%lld", m+n/2);
        }
        
    }
    return 0;
}