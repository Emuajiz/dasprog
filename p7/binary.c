#include <stdio.h>
#include <stdlib.h>
 
int binary(long long int data[], int l, int r, int x)
{
    if(r >= l) {
        int mid = (l + r) / 2;
        if(data[mid] == x) return mid;
 
        if(data[mid] < x) return binary(data, mid + 1, r, x);
        return binary(data, l, mid - 1, x);
    }
    return -1;
}
 
int main()
{
    int n, check;
    scanf("%d", &n);
    long long int * data = (long long int *) malloc(n * sizeof(long long int));
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &data[i]);
    }
    scanf("%d", &check);
    printf("%d\n", binary(data, 0, n - 1, check));
    return 0;
}