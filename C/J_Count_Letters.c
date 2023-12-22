#include<stdio.h>
#include<string.h>


int main ()
{
    char s[10000001];
    scanf("%s", &s);



    int ans[26] = {0};
    for(int i=0; s[i]!='\0'; ++i) {
        int value = s[i] - 'a';
        ans[value]++;
    }

    for(int i = 0; i<26; ++i) {
        if(ans[i] != 0) {
            printf("%c : %d\n",  i+'a', ans[i]);
        }

        ans[i]=0;
    }
    return 0;
}