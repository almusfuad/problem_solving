#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);

    int flag=1;
    int testCase=1;

    while(t !=0 ) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i=0; i<n; ++i) {
            scanf("%d ", &arr[i]);
        }

        int s;
        scanf("%d", &s);

        for(int i=0; i<n; ++i) {
            if(s==arr[i]) {
                printf("Case %d: %d\n", testCase, i+1);
                flag=1;
                break;
            }

            if(s!=arr[i]) {
                flag=0;
            }
        }
        if(flag==0) {
            printf("Case %d: Not Found\n", testCase);
        }
        testCase++;
        t--;
    }


    return 0;
}