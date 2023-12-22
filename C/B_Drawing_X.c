#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int mid = n;
    if(n%2==0) {
        mid = n;
    } else {
        mid = n/2 + 1;
    }

    int fs=1, bs=n;

    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=n; ++j) {
            if(i==mid) {
                if(mid==j) {
                    printf("X");
                } else {
                    printf("*");
                }
            } else {
                if(fs==j) {
                    printf("\\");
                } else if(bs==j) {
                    printf("/");
                } else {
                    printf("*");
                }
            }
        }

        fs++;
        bs--;

        printf("\n");
    }
    return 0;
}