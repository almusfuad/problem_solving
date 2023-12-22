#include<stdio.h>
int main ()
{
    int test;
    scanf("%d", &test);

    while(test !=0 )
    {
        long long int w, h;
        scanf("%lld %lld", &w, &h);

        if(w==h) 
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
        test--;
    }
    return 0;
}