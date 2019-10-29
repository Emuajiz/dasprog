#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
    char a[SIZE], b[SIZE];
    fgets(a, SIZE, stdin);
    fgets(b, SIZE, stdin);
    strtok(a, "\n");
    strtok(b, "\n");
    unsigned long int panjangA = strlen(a);
    unsigned long int panjangB = strlen(b);
    int ada = -1;
    if(panjangA > panjangB)
    {
        unsigned long int selisih = panjangA - panjangB;
        for (size_t i = 0; i <= selisih; i++)
        {
            for (size_t j = 0; j < panjangB; j++)
            {
                if(!(a[i+j] == b[j]))
                {
                    ada = -1;
                    break;
                }
                ada = i;
            }
            if(ada != -1)
            {
                break;
            }
        }
    }
    printf("%d\n", ada);
    return 0;
}