#include<stdio.h>
#include<limits.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int marks[n];
    for(int i=0; i<n; ++i) {
        scanf("%d ", &marks[i]);
    }

    int max=INT_MIN;
    for(int i=0; i<n; ++i) {
        if(marks[i]>max) {
            max=marks[i];
        }
    }

    for(int i=0; i<n; ++i) {
        printf("%d ", max-marks[i]);
    }
    return 0;
}