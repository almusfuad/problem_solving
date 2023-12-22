#include<stdio.h>

void sequence() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<n; ++i) {
        printf("%d ", i);
    }

    printf("%d", n);
}

int main ()
{
    sequence();
    return 0;
}