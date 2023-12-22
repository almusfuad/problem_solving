#include<stdio.h>
int main ()
{
    long long int n, m;
    scanf("%lld %lld\n", &n, &m);

    int arr[n];
    for(int i=0; i<n; ++i) {
        scanf("%d ", &arr[i]);
    }

    long long int cnt[100001] = {0};
    for(int i=0; i<n; ++i) {
        int value=arr[i];
        cnt[value]++;
    }

    for(int i=1; i<=m; ++i) {
        printf("%lld\n", cnt[i]);
    }
    return 0;
}