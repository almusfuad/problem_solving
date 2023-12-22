#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int arr1[n];
    for(int i=0; i<n; ++i) {
        scanf("%d ", &arr1[i]);
    }

    int count = 0;
    int arr2[n];
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(arr1[i]+1==arr1[j]) {
                count++;
                break;
            }

        }
    }

    printf("%d\n", count);
    return 0;
}