#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d\n", &n);

    char x[100001];
    for(int i=0; i<=n; ++i) {
        scanf("%s\n", &x);
        for(int j=0; j<strlen(x); i+3) {
            if(x[j]!="010" || x[j]!="101") {
                printf("Bad");
            } else {
                printf("Good");
            }
        }
    }
    return 0;
}