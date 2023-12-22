#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int i,j;

    long long int arr[n];
    if(n>0) {
        for( i=0; i<n; ++i) {
            scanf("%lld", &arr[i]);
        }
    }


    long long int revArr[n];
    for( i=n-1, j=0; i>=0, j<n; --i, ++j) {
        revArr[j] = arr[i];
    }

    for( i=0, j=0; i<n, j<n; ++i, ++j ) {
        if(revArr[j] == arr[i]) {
            printf("YES");
            break;
        } else {
            printf("NO");
            break;
        }

    }

    return 0;
}