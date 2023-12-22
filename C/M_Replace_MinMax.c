#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int a;
    for(int i=0; i<n; ++i) {
        scanf("%d ", &arr[i]);
    }

    int max= -100000, min=100000;
    for(int i=0; i<n; ++i) {
        if(max<arr[i]) {
            max = arr[i];
        }

        if(min>arr[i]) {
            min = arr[i];
        }
    }



    for(int i=0; i<n; ++i) {
        if(arr[i]==max) {
            arr[i] = min;
        } else if (arr[i]==min) {
            arr[i] = max;
        }
    }


    for(int i=0; i<n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}