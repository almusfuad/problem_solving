#include<stdio.h>
int main ()
{
    int n;
    scanf("%d\n", &n);

    int arr[n];
    for(int i=0; i<n; ++i) {
        scanf("%d ", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int ans=0;
    for(int i=0; i<n; ++i) {
        if(arr[i]==x) {
            ans++;
        }
    }

    printf("%d", ans);
    return 0;
}