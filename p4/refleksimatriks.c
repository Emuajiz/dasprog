#include <stdio.h>
#define SIZE 75

int main()
{
    int n, m, col, row, derajat;
    scanf("%d %d", &n, &m);
    int matriks[SIZE][SIZE];
    int new[SIZE][SIZE];
    for(row = 0; row<n; row++)
    {
        for(col = 0; col<n; col++)
        {
            scanf("%d", &matriks[row][col]);
        }
    }
    
    scanf("%d %d", &n, &m);
    for(row = 0; row<n; row++)
    {
        for(col = 0; col<n; col++)
        {
            scanf("%d", &new[row][col]);
        }
    }
    for(row = 0; row<n; row++)
    {
        for(col = 0; col < n; col++)
            if(matriks[row][col] != new[row][col])
            {
                printf("not");
                return 0;
            }
    }
    printf("identik");
    return 0;
}