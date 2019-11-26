#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            // kalau ganjil
            if((i+j)%2)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            if(j < n-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}