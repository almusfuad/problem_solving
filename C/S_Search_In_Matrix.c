#include<stdio.h>



int main ()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int arr[row][column];
    for(int i=0; i<row; ++i) {
        for(int j=0; j<column; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int flag = 0;
    for(int i=0; i<row; ++i) {
        for(int j=0; j<column; ++j) {
            if(x == arr[i][j]) {
                flag = 1;
            }
        }
    }

    if(flag == 0) {
        printf("will take number\n");
    } else {
        printf("will not take number\n");
    }

    return 0;
}