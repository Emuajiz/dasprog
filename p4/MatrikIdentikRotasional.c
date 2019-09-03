#include <stdio.h>
#define SIZE 100

void transpose(int n, int source[SIZE][SIZE], int dest[SIZE][SIZE])
{
    int col, row;
    for(row = 0; row<n; row++)
    {
        for(col = 0; col<n; col++)
        {
            // scanf("%d", &matriks[row][col]);
            // printf("%d", matriks[row][col]);
            dest[row][col] = source[col][row];
        }
    }
}

void flipV(int n, int source[SIZE][SIZE], int dest[SIZE][SIZE])
{
    int col, row;
    for(row = 0; row<n; row++)
    {
        for(col = 0; col<n; col++)
        {
            // scanf("%d", &matriks[row][col]);
            // printf("%d", matriks[row][col]);
            dest[row][col] = source[n - row - 1][col];
        }
    }
}

void flipH(int n, int source[SIZE][SIZE], int dest[SIZE][SIZE])
{
    int col, row;
    for(row = 0; row<n; row++)
    {
        for(col = 0; col<n; col++)
        {
            // scanf("%d", &matriks[row][col]);
            // printf("%d", matriks[row][col]);
            dest[row][col] = source[row][n - col - 1];
        }
    }
}

int main()
{
    int n, col, row, derajat;
    scanf("%d", &n);
    int matriks[SIZE][SIZE];
    int new[SIZE][SIZE];
    for(row = 0; row<n; row++)
    {
        for(col = 0; col<n; col++)
        {
            scanf("%d", &matriks[row][col]);
            // printf("%d", matriks[row][col]);
        }
        // printf("\n");
    }
    // printf("\n");
    scanf("%d", &derajat);
    // printf("%d\n", derajat);
    // printf("\n");
    if(derajat == 90)
    {
        for(row = 0; row<n; row++)
        {
            for(col = 0; col<n; col++)
            {
                new[row][col] = matriks[col][n - row - 1];
            }
        }
    }
    if(derajat == 180)
    {
        for(row = 0; row<n; row++)
        {
            for(col = 0; col<n; col++)
            {
                new[row][col] = matriks[n - row - 1][n - col - 1];
            }
        }
    }
    if(derajat == 270)
    {
        for(row = 0; row<n; row++)
        {
            for(col = 0; col<n; col++)
            {
                new[row][col] = matriks[n - col - 1][row];
            }
        }
    }
    for(row = 0; row<n; row++)
    {
        for(col = 0; col<n; col++)
        {
            // scanf("%d", &matriks[row][col]);
            printf("%d", new[row][col]);
            if(col != n - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
} 