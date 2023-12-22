#include<stdio.h>

long long int fun(long long int arr[], int size, int i) {
    
    if (i>=size) return 0;

    

    return (arr[i] + fun(arr, size, i+1));
    
}

int main ()
{
    int size;
    scanf("%d", &size);

    long long int arr[size];
    for(int i=0; i<size; ++i) {
        scanf("%lld ", &arr[i]);
    }

    long long int sumOfArray = fun(arr, size, 0);
    printf("%lld", sumOfArray);
    return 0;
}