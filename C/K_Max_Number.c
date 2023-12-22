#include<stdio.h>
#include<limits.h>

long long int fun(long long int arr[], int n, int i)
{
    if(i>=n) return INT_MIN;

    long long int max = fun(arr, n, i+1);
    if(arr[i] > max) 
    {
        return arr[i];
    }
    else
    {
        return max;
    }
}


int main ()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for(int i=0; i<n; ++i)
    {
        scanf("%lld ", &arr[i]);
    }

    long long int mx = fun(arr, n, 0);
    printf("%lld\n", mx);
    return 0;
}