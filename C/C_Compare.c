#include<stdio.h>
#include<string.h>
int main ()
{
    char x[21];
    char y[21];
    scanf("%s\n%s\n", &x, &y);

    for(int i=0; ; ++i) {
        if(x[i]!=y[i]) {
            if(x[i]<=y[i]) {
                printf("%s", x);
            } else {
                printf("%s", y);
            }
            break;
        }
    }
    return 0;
}