#include <stdio.h>

#define SIZE 10

void aprintPascal(int n) 
{ 
    // for (int line = 1; line <= n; line++) 
    // { 
        int C = 1; // used to represent C(line, i) 
        for (int i = 1; i < n; i++)  
        { 
        printf("%d%d ", i, C); // The first value in a line is always 1 
        C = C * (n - i) / i;  
        } 
        printf("\n"); 
    // }
}

int main()
{
    int i, j, n, jadi[SIZE] = {0}, cek;
    //baca n
    scanf("%d", &n);
    // pesen array
    int arr[n];
    // baca array
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d ", arr[i]);
    }
    // printf("%d ", arr[0]);
    for(i = 0; i<n; i++)
    {
        // aprintPascal(i);
        if(i == 0) {
            printf("%d", arr[i]);
        } else {
        for(j = n; j > 0; j--){
            arr[j-1] = arr[j-1] - arr[j-2];
        }
        printf("%d", arr[i]);
        }
        if(i == n - 1) printf("\n");
        else printf(" ");
    }
    return 0;
}