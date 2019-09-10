#include <stdio.h>

int main()
{
    int row, col, subRow, subCol, i, j, k, l, maxCheck, max = 0;
    //baca ukuran
    scanf("%d %d %d %d", &row, &col, &subRow, &subCol);
    printf("%d %d %d %d\n", row, col, subRow, subCol);
    int arr[row][col];
    // baca matrix
    for(i = 0; i<row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // cek paling besar
    // dari i -> row - subRow + 1
    for(i = 0; i < row - subRow + 1; i++)
    {
        for(j = 0; j < col; j++)
        {
            // kalau 1 2
            maxCheck = 0;
            maxCheck += arr[i][j] + arr[i + 1][j];

            if(max < maxCheck) max = maxCheck;
        }
    }
    printf("%d\n", max);
    return 0;
}