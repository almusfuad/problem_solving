#include<stdio.h>
int main ()
{
    char s[1005];
    fgets(s, 1005, stdin);

    int capital=0, small=0, spaces=0;

    int i=0;
    while(s[i] != '\0') {
        if(s[i]>='A' && s[i]<= 'Z') {
            capital++;
        }
        else if(s[i]>='a' && s[i]<='z') {
            small++;
        }
        else if(s[i]==' ') {
            spaces++;
        }
        i++;
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", spaces);

    return 0;
}