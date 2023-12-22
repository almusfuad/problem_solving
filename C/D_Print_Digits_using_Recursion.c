#include<stdio.h>

void fun(int n) 
{
    if(n==0) return;
    int x = n%10;
    fun(n/10);
    printf("%d ", x);
}


int main ()
{
    int test;
    scanf("%d", &test);

    while(test != 0) 
    {
        int n;
        scanf("%d", &n);
        if(n==0) 
        {
            printf("0");
        }
        else
        {
            fun(n);
        }
        test--;
        printf("\n");
    }
    return 0;
}