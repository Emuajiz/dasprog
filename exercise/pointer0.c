#include <stdio.h>
#define SIZE 4

int main() 
{
    int a[][SIZE] = {{0,1,2,3}, {4,5,6}, {7,8,9,10} };
    int *p = &a[0][0];
    // p ke address angka 0
    int *q = a[0];
    // q ke address angka 0
    int *r = a[1];
    // r ke address angka 4
    int *s = a[2];
    // s ke address angka 7
    printf("%d\n", *(p+SIZE+1));
    //nge print di address p + 4 + 1
    printf("%d\n", p[SIZE+1]);
    // print p[5]
    printf("%d\n", p[2*SIZE+1]);
    // print p[9]
    printf("%d\n", *(q+2*SIZE+2));
    // print address q
    printf("%d\n", *r);
    // print angka di address r
    printf("%d\n", *(r-2));
    printf("%d\n", s[3]);
    printf("%d\n", *(a[0]+7));
    return 0;
}