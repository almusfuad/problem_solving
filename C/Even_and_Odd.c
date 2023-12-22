#include<stdio.h>
int main ()
{
    int n, sumEven=0, sumOdd=0;
    scanf("%d", &n);

    int v[n];
    for(int i=0; i<n; ++i) {
        scanf("%d ", &v[i]);
    }

    for(int i=0; i<n; ++i) {
        if(v[i]%2==0) {
            sumEven += v[i];
        } else {
            sumOdd += v[i];
        }
    }

    printf("%d %d", sumEven, sumOdd);
    return 0;
}