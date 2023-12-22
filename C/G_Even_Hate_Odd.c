#include<stdio.h>
int main ()
{
    int test;
    scanf("%d", &test);

    while(test !=0 ) {
        int size;
        scanf("%d", &size);

        int arr[size];
        for(int i=0; i<size; ++i) {
            scanf("%d ", &arr[i]);
        }

        int even=0, odd=0, operations=0;
        
        if(size%2==0) {
            for(int i=0; i<size; ++i) {
                if(arr[i]%2!=0) {
                    odd++;
                } else {
                    even++;
                }
            }

            if(even==odd) {
                operations = 0;
            } else if(odd>even) {
                operations = size/2 - even;
            } else if(even>odd) {
                operations = size/2 - odd;
            }
        } else {
            operations = -1;
        }
        

        printf("%d\n", operations);
        test--;
    }


    return 0;
}