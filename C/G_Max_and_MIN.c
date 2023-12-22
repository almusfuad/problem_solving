#include<stdio.h>

void max_min(int num) {
    int arr[num];
    for(int i=0; i<num; ++i) {
        scanf("%d ", &arr[i]);
    }

    int max=0, min=100000;
    for(int i=0; i<num; ++i) {
        if(max<arr[i]) {
            max = arr[i];
        }

        if(min>arr[i]) {
            min = arr[i];
        }
    }

    printf("%d %d", min, max);
}

int main ()
{
    int n;
    scanf("%d", &n);
    max_min(n);
    return 0;
}