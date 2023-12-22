#include<stdio.h>
#include<string.h>
int main ()
{
    char s[1001];
    scanf("%s", s);


    int count[26]={0};
    for(int i=0; i<strlen(s); ++i) {
        int value = s[i] - 'a';
        count[value]++;
    }

    for(int i='a'; i<='z'; ++i) {
        printf("%c - %d\n", i, count[i-'a']);
    }

    return 0;
}