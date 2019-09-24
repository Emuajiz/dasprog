#include <stdio.h>
#include <stdlib.h>

int tukar(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int n, flip = 0;
    scanf("%d", &n);
    int * data = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
        // printf("%d\n", data[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            // printf("%d\n", j);
            if(data[j] > data[j+1]) 
            {
                tukar(&data[j], &data[j+1]);
                flip++;
            }
        }
        
    }
    printf("%d\n", flip);    

    return 0;
}