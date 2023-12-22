#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for(int i=0; i<n; ++i) 
    {
        scanf("%lld ", &arr[i]);
    }

    long long int min=arr[0];
    for(int i=0; i<n-1; ++i)
    {
        if(arr[i]<min) {
            min = arr[i];
        }
    }

    int total=0;
    for(int i=0; i<n; ++i) 
    {
        if(arr[i]==min)
        {
            total++;
        }
    }

    if(total%2 == 0) 
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}