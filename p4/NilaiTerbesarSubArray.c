#include <stdio.h>

int main()
{
    int n, i, j, subArraySize, max;
    scanf("%d", &n);
    int data[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &data[i]);
    }
    scanf("%d", &subArraySize);
    // int subArray[subArraySize];
    // for(i = 0; i < subArraySize; i++)
    // {
    //     subArray[i] = data[i];
    //     printf("%d", subArray[i]);
    // }
    // printf("\n");
    for(i = 0, n = n - subArraySize; i<=n; i++)
    {
        max = data[i];
        for(j = 1; j<subArraySize;j++)
        {
            if(max < data[i+j]) max = data[i+j];
        }
        printf("%d", max);
        if(i == n) printf("\n");
        else printf(" ");
    }
    return 0;
} 