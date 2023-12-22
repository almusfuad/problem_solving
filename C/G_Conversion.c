#include<stdio.h>
#include<string.h>
int main ()
{
    char s[100001];
    scanf("%s", &s);
    for(int i=0; i<strlen(s); ++i) {
       int z=s[i];
       if(z>='a' && z<='z') {
            s[i] = z-32;
            printf("%c", s[i]);
       } else if(z>='A' && z<='Z') {
            s[i] = z + 32;
            printf("%c", s[i]);
       } else if(z==',') {
            s[i]=' ';
            printf("%c", s[i]);
       }
       

    }
    return 0;
}