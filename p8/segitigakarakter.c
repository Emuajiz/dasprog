#include <stdio.h>

int main()
{
    char a, b, c;
    int n;
    scanf("%d ", &n);
    scanf("%c %c %c ", &a, &b, &c);
    // printf("%c %c %c\n", a, b, c);
    for(int i = 0; i<n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            if(j == 0 && i != n-1)
            {
                printf("%c", a);
            }
            else if(i == j)
            {
                printf("%c", c);
            }
            else if(i == j || i == n-1)
            {
                printf("%c", b);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}