#include <stdio.h>
#include <stdlib.h>
// #include <s.h>

int main()
{
    int n, *permen, sum = 0, rata, selisih, yangkurang, yanglebih;
    yangkurang = yanglebih = 0;
    scanf("%d", &n);
    permen = (int *) malloc(n * sizeof(int));
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &permen[i]);
        // printf("%d ", permen[i]);
        sum += permen[i];
    }
    // printf("| %d\n", sum);
    if(sum%n)
    {
        printf("-1\n");
    }
    else
    {
        // printf("todo\n");
        rata = sum/n;
        // printf("Rata %d\n", rata);
        for(int i = 0; i<n; i++)
        {
            selisih = rata - permen[i];
            if(selisih > 0)
            {
                yangkurang += selisih;
            }
            else if(selisih < 0)
            {
                yanglebih -= selisih;
            }
        }
        // printf("kurang %d\n", yangkurang);    
        // printf("lebih %d\n", yanglebih);    
        printf("%d\n", yanglebih);
    }
    return 0;
}