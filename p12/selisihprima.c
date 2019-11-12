#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int primes[10000] = {0};
void generate(int limit) {
    unsigned long long int i,j;
    // int z = 1;
    int start = 2;
    // primes = (int*) malloc(sizeof(int) * limit);
    for (i = start;i < limit; i++)
        primes[i] = 1;
 
    for (i = start;i < limit; i++)
        if (primes[i])
            for (j = i;i * j < limit; j++)
                primes[i * j] = 0;    
}

int main()
{
    long long int n, input, bil1, bil2;

    scanf("%lld", &n);
    while(n--)
    {
        scanf("%lld", &input);
        long long  kali2 = input * 2 + 5;
        long long  selisih;
        generate(kali2);
        if(input == 1)
            printf("2 3\n");
        else
        {
            for (int i = 2; i <= kali2; i++)
            {
                /* code */
                // printf("%d %d ", i, primes[i]);
                if(primes[i])
                {
                    bil1 = i;
                    bil2 = input + bil1;
                    // printf("%d %d ", bil2, primes[bil2]);
                    if(primes[bil2])
                    {
                        // bil2 = input + bil1;                    
                        // printf("%d %d %d\n", input, bil1, bil2);
                        break;
                    }
                }
            }
            // printf("%d %d\n", bil2, primes[bil2]);
            if(primes[bil2])
            {
                printf("%lld %lld\n", bil1, bil2);
            }
            else
            {
                printf("TIDAK ADA\n");
            }
        }
    }
    return 0;
}