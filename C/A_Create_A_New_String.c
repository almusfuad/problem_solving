#include<stdio.h>
#include<string.h>

int main ()
{
    char a1[1000];
    char a2[1000];

    scanf("%s", &a1);
    scanf("%s", &a2);

    int s1=strlen(a1);
    int s2=strlen(a2);

    printf("%d %d\n%s %s", s1, s2, a1, a2);
    
    return 0;
}