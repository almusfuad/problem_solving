#include<stdio.h>
int main ()
{
    int n, x, ans= -1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; ++i) {
        scanf("%d ", &arr[i]);
    }

    scanf("%d", &x);
    for(int i=0; i<n; ++i) {
        if(x==arr[i]){
            ans = i;
            break;
        } else {
            ans = ans;
        }
    }

    printf("%d", ans);

    return 0;
}