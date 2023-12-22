#include<stdio.h>
int main ()
{
    int odd, even;
    scanf("%d %d", &odd, &even);

    if(odd==0 && even==0) {
        printf("NO");
    } else {
        if(odd+1 == even || even+1 == odd || odd == even) {
            printf("YES");
        } else {
            printf("NO");
        }
    }

    return 0;
}