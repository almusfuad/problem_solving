#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d", &n);

    char arr[n];
    for(int i=0; i<=n; ++i) {
        scanf("%c", &arr[i]);
    }

    int res=0;
    for(int i=0; i<=n; ++i) {
        if(arr[i]>='0' && arr[i] <= '9') {
            res += arr[i] - 48;
        }
    }

    printf("%d", res);
    return 0;
}