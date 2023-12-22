#include<stdio.h>
#include<string.h>
int main ()
{
    char s[1001];
    scanf("%s", s);

    int vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    int vowLet=0;
    for(int i=0; i<5; ++i) {
        for(int j=0; j<strlen(s); ++j) {
            if(s[j]==vowel[i]) {
                vowLet++;
            }
        }
    }

    printf("%d", vowLet);
    return 0;
}