#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, ada;
    int * data;
    int cek;
    scanf("%d", &n);
    data = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
        // printf("%d\n", data[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &cek);
        printf("%d", cek);
        ada = 0;
        for (int j = 0; j < n; j++)
        {
            if(data[j] == cek)
            {
                ada = 1;
                printf(" %d", j + 1);
            }
        }

        if(!ada) printf(" TIDAK ADA");

        printf("\n");
    }
    
    return 0;
}