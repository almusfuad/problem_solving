#include<stdio.h>
int main ()
{
    int n, rem, div;
    scanf("%d", &n);
    rem = n%10;
    div = n/10;
    if (rem%div == 0 || div%rem == 0) {
        printf("YES");
    }  else {
        printf("NO");
    }

    return 0;
}