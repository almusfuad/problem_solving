#include<stdio.h>
int main ()
{
    long long int n;
    scanf("%lld", &n);

    char s;
    int cnt[26] = {0};
    while(scanf("%c", &s) != EOF) {
        cnt[s - 'a']++;
    }

    for(int i=0; i<26; i++){
        while(cnt[i] != 0) {
            printf("%c", i+'a');
            cnt[i]--;
        }
    }

    return 0;
}