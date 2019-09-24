#include <stdio.h>
#include <stdlib.h>

int smallestSumSubarr(int arr[], int n) 
{ 
      
    int best = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        // best = min;
        best += arr[i];
        if(arr[i] < best) min = arr[i]; 
    }
    
    return min; 
} 

int main()
{
    int n, in, min;
    scanf("%d", &n);
    int * arr = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
    // $arr = array(3, -4, 2, -3, -1, 7, -5); 
    // $n = count($arr) ; 
    min = smallestSumSubarr(arr, n);
    // echo "Smallest sum: "
    //      .smallestSumSubarr($arr, $n); 
    printf("%d\n", min);

    return 0;
}