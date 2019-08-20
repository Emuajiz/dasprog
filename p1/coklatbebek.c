#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int coklat, Sn, Un, D, sisa;
    scanf("%llu", &coklat);
    D = 1 - (4 * -2 * coklat);
    Un = (-1 + (sqrtl(D))) / 2;
    if (Un == 1)
        Sn = 1;
    else
        Sn = Un / 2 * (2 + Un - 1);
    if (Sn - coklat < 0)
        printf("%llu\n", Un);
    else
        printf("%llu\n", Un + 1);
    return 0;
}