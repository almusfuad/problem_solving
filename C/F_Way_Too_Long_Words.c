#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d\n", &n);

    char str[101];
    for(int i=1; i<=n; ++i) {
        scanf("%s", &str);
        
        int len = strlen(str);
        
        
        if(len>10) {
            printf("%c%d%c\n", str[0], len-2, str[len-1]);
            
        } else {
            printf("%s\n", str);
        }
        

    }
    return 0;
}