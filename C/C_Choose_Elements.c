#include<stdio.h>
int main ()
{
    int n, k;
    scanf("%d %d", &n, &k);

    long long int arr[n];
    for(int i=0; i<n; ++i) 
    {
        scanf("%lld ", &arr[i]);
    }

    long long int total = 0;
    for(int i=0; i<n; ++i) 
    {
        for(int j=i+1; j<n; ++j) 
        {
            if(arr[i]<arr[j]) 
            {
                long long int temp = arr[i];
                arr[i] = arr [j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<k; ++i) 
    {
        if(arr[i]>0)
        {
            total += arr[i];
        }
    }

    if(total<0) 
    {
        printf("0");
    }
    else
    {
        printf("%lld", total);
    }
    return 0;
}