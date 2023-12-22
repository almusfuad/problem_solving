#include<stdio.h>
#include<stdlib.h>

int primaryDiagonal(int row, int column, int arr[][column]) {
    int total = 0;
    for(int i=0; i<row; ++i) {
        for(int j=0; j<column; ++j) {
            if(i==j) {
                total += arr[i][j];
            }
        }
    }

    return total;
}

int secondaryDiagonal(int row, int column, int arr[][column]) {
    int total = 0;
    for(int i=0; i<row; ++i) {
        for(int j=0; j<column; ++j) {
            if(i+j == row-1) {
                total += arr[i][j];
            }
        }
    }

    return total;
}


int main ()
{
    int n;
    scanf("%d", &n);

    int row = n, column = n;
    int arr[row][column];
    for(int i=0; i<row; ++i) {
        for(int j=0; j<column; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    int primary = primaryDiagonal(row, column, arr);
    int secondary = secondaryDiagonal(row, column, arr);

    printf("%d", abs(primary-secondary));

    return 0;
}