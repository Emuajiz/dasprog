#include <stdio.h>

int main()
{
    int in = 1;
    int i = 1;
    int arr[100] = {0};
    // baca data;
    scanf("%d", &in);
    while(in)
    {
        arr[in-1] = i;
        // printf("%d\n", i);
        i++;
        scanf("%d", &in);
    }
    for (i = 99; i >= 0; i--)
    {
        if(arr[i]) printf("%d\n", arr[i]);
    }
    
    return 0;
}