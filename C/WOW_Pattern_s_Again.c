#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int space = n-1;
    int upArrow = 1;
    int star = 1;

    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=space; ++j) {
            printf(" ");
        }

        if(i%2 != 0) {
            for(int j=1; j<=upArrow; ++j) {
                printf("^");
            }
        }else {
            for(int j=1; j<=star; ++j) {
                printf("*");
            }
        }
        star += 2;
        upArrow += 2;
        space--;

        printf("\n");
        
    }


    return 0;
}