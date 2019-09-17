#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m,* alice,* bob;

    scanf("%d", &n);
    alice = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &alice[i]);
        // printf("%d\n", alice[i]);
    }

    scanf("%d", &m);
    bob = (int *) malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &bob[i]);
        // while(alice[j] <= bob[i] && j < m) 
        // {
        //     printf("%d\n", alice[j]);
        //     j++;
        // }
        // printf("%d\n", bob[i]);
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while(alice[i] >= bob[j] && j < m)
        {
            printf("%d\n", bob[j]);
            j++;    
        }
        printf("%d\n", alice[i]);
    }

    for (int i = j; i < m; i++)
    {
        printf("%d\n", bob[i]);
        /* code */
    }
    
    
    // printf("\n");
    return 0;
}