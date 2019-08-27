#include <stdio.h>

int main()
{
    int n, data[1000] = {0}, check, max = 0, modus;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &check);
        data[check-1]++;
    }
    for(n = 0; n<1000; n++)
    {
        if(data[n]>=max)
        {
            max = data[n];
            modus = n+1;
        }
    }
    printf("%d\n", modus);
    return 0;
}