#include<stdio.h>
int main ()
{
    float dis, price;
    scanf("%f %f", &dis, &price);

    float total = (100 * price) / (100-dis);
    printf("%.2f", total);
    return 0;
}