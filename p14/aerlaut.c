#include <stdio.h>
#include <stdlib.h>
// #include <s.h>

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 

int main()
{
    int n, a, b, x;
    int fpb;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d %d %d ", &a, &b, &x);
        fpb = gcd(a, b);
        if(x % fpb)
        {
            printf("TIDAK MUNGKIN\n");
        }
        else
        {
            printf("MUNGKIN\n");
        }
        
    }
    return 0;
}