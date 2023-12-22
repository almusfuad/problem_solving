#include<stdio.h>

int fun(char s[], int i)
{
    if(s[i]=='\0') return 0;

    int vowel = fun(s, i+1);
    if(s[i]>='A' && s[i]<= 'Z')
    {
         s[i] = s[i] + 32;
    }

    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return vowel + 1;
    }
    else
    {
        return vowel;
    }
    

}

int main ()
{
    char s[201];
    fgets(s, 201, stdin);

    int vowel = fun(s, 0);
    printf("%d", vowel);
    return 0;
}