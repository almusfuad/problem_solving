#include<stdio.h>
int main ()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int arr[row][column];
    for(int i=0; i<row; ++i) {
        for(int j=0; j<column; ++j) {
            scanf("%d ", &arr[i][j]);
        }
    }

    for(int i=0; i<column; ++i) {
        printf("%d ", arr[row-1][i]);
    }
    
    printf("\n");

    for(int i=0; i<row; ++i) {
        printf("%d ", arr[i][column-1]);
    }
     return 0;
}