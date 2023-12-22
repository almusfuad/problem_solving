#include<stdio.h>

int main ()
{
    int n, group;
    scanf("%d %d", &n, &group);

    int size = n/group;

    if(n%group==0) {
        size = size;
    } else {
        size = size + 1;
    }

    long long int inputArr[n];
    for(int i=0; i<n; ++i) {
        scanf("%lld ", &inputArr[i]);
    }

    int checkingStart = 0;
    int groupCheck = group;
    while(size != 0) {
        long long int smallest = inputArr[checkingStart];
        if(groupCheck<n) {
            for(int i=checkingStart; i<groupCheck; ++i) {
                if(inputArr[i]<smallest) {
                    smallest = inputArr[i];
                } else {
                    smallest = smallest;
                }
            }
        } else {
            for(int i=checkingStart; i<n; ++i) {
                if(inputArr[i]<smallest) {
                    smallest = inputArr[i];
                } else {
                    smallest = smallest;
                }
            }
        }

        printf("%d ", smallest);
        checkingStart += group;
        groupCheck += group;
        size--;
    }
    return 0;
}