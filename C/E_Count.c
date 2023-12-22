#include<stdio.h>
#include<string.h>

int main ()
{
    char a[1000001];
    scanf("%s", &a);

    int i=0, res=0;
    while(a[i]!='\0') {
        res += a[i] - '0';
        i++;
    }
    printf("%d", res);
    return 0;
}