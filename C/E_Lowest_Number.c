#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; ++i) {
        scanf("%d", &arr[i]);
    }

    int low, pos;
    for(int i=0; i<n; ++i) {
        if(arr[i]<low) {
            low = arr[i];
            pos = i+1;
        }
    }

    printf("%d %d", low, pos);

    return 0;
}