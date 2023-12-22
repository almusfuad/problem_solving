#include<stdio.h>
int main ()
{
    int test;
    long long int number;
    scanf("%d", &test);


    int max=0;
    

    while(test != 0 ) {
        scanf("%lld ", &number);
        int res = 0;
        while(number%2==0) {
            res++;
            number = number/2;
        }
        if(max<res) {
            max=res;
        }
        // max = max<res?res:max;

        test--;
    }

    printf("%d", max);
    return 0;
}