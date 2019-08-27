#include <stdio.h>

int main()
{
    int n, check, nol = 0, need = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &check);
        arr[i] = check;
        if(check == 0) nol++;
    }
    for(int i = n - nol; i<n; i++)
    {
        if(arr[i])
        {
            need++;
        }
    }
    printf("%d\n", need);
    return 0;
}