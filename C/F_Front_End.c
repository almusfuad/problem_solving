#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for(int i=0; i<n; ++i) {
        scanf("%d ", &arr[i]);
    }

    long long int finalArr[n];
    int j=0, k=n-1;
    for(int i=0; i<n; ++i) {
        if(i%2==0) {
            finalArr[i] = arr[j];
            j++;
        } else {
            finalArr[i] = arr[k];
            k--;
        }
    }

    for(int i=0; i<n; ++i) {
        printf("%d ", finalArr[i]);
    }
    return 0;
}