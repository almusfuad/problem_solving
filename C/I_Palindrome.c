#include<stdio.h>
#include<string.h>
int main ()
{
    char s[1001];
    char srev[1001];
    scanf("%s", &s);

    int i=0, length = 0, j;
    while(s[i]!='\0') {
        i++;
        length++;
    }

    for(j=0, i=length-1; i>=0; --i, ++j) {
        srev[j] = s[i];
    }
    srev[j] = '\0';

    int p = strcmp(s,srev);
    if(p==0) {
        printf("YES");
    } else {
        printf("NO");
    }
 
    

    return 0;
}