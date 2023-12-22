#include<stdio.h>
int main ()
{
    int test;
    scanf("%d", &test);

    int tiger=0, pathan=0;

    while(test != 0) 
    {
        long long int x1, x2;
        scanf("%lld %lld", &x1, &x2);

        if(x1>x2) {
            tiger++;
        } 
        else if(x2>x1) {
            pathan++;
        }

        test--;
    }

    if(tiger>pathan) {
        printf("Tiger");
    }
    else if(pathan>tiger) {
        printf("Pathan");
    }
    else {
        printf("Draw");
    }

    return 0;
}