#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c) {
        if(a==0) {
            printf("No");
        } else {
            printf("Yes");
        }
    } else {
        printf("No");
    }
    return 0;
}