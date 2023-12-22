#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    int test;
    scanf("%d", &test);

    long long int start, end;
    
    while(test != 0) {
        scanf("%lld %lld", &start, &end);

        
        long long int sum=0;
        if(end>start) {
            sum = end*(end+1)/2 - (start-1)*start/2;
        } else {
            sum = start*(start+1)/2 - (end-1)*end/2;
        }
       
        

        printf("%lld\n", sum);
        test--;
    }
    return 0;
}