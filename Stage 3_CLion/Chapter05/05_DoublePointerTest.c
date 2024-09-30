//
// Created by Ziyan Xu on 9/29/24.
//
//使用malloc()函数创建一维数组

#include <stdio.h>
#include <stdlib.h>

int main() {

    int row, column;

    printf("Length of first dimension:");
    scanf("%d", &row);
    printf("Length of second dimension:");
    scanf("%d", &column);

    int **arr = (int **)malloc(row * sizeof(int *));
    for(int i = 0; i < row; i++) {
        arr[i] = (int *)malloc(column * sizeof(int));

        for(int j = 0; j < column; j++) {
            arr[i][j] = 1;

            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
