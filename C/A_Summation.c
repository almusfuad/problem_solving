#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    
    long long int a, sum=0;
    for(int i=1; i<=n; i++) {
        scanf("%lld ", &a);
        sum += a;
        
    }
    if(sum<0) {
        sum *= -1;
        printf("%lld", sum);
    } else {
        printf("%lld", sum);
    }
    
    return 0;
}