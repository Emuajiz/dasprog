#include <stdio.h>

int main()
{
    int n, a[201] = {0}, b[201] = {0}, input;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &input);
        a[input + 100] = 1;
    }
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &input);
        b[input + 100] = 1;
    }

    for (n = 0; n < 201; n++)
    {
        if ((a[n] == 1 && b[n] == 0))
        {
            printf("%d\n", n - 100);
        }
    }
    return 0;
}