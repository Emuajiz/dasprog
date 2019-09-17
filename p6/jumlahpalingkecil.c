#include <stdio.h>
#include <stdlib.h>

int smallestSumSubarr(int arr[], int n) 
{ 
      
    // to store the minimum  
    // value that is ending 
    // up to the current index 
    int min_ending_here = 999999; 
      
    // to store the minimum value 
    // encountered so far 
    int min_so_far = 999999; 
      
    // traverse the array elements 
    for(int i = 0; i < n; i++) 
    { 
          
        // if min_ending_here > 0,  
        // then it could not possibly 
        // contribute to the minimum  
        // sum further 
        if (min_ending_here > 0) 
            min_ending_here = arr[i]; 
          
        // else add the value arr[i]  
        // to min_ending_here  
        else
            min_ending_here += arr[i]; 
          
        // update min_so_far 
        min_so_far = min_so_far > min_ending_here ? min_ending_here : min_so_far;          

        // min_so_far = min(min_so_far,  
        //              min_ending_here);          
    } 
      
    // required smallest sum  
    // contiguous subarray value 
    return min_so_far; 
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