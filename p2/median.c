#include <stdio.h>

int main()
{
    int n, a[16001] = {0}, input;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &input);
        a[input + 8000]++;
    }
    //buat data ganjil
    if(n%2){
        n = n / 2 + 1;
        for(int i = 0; i < 16001; i++){
            // if(a[i]) printf("%d\n", i - 8000);
            n -= a[i];
            if(n <= 0) {
                printf("%.2lf\n", i - 8000.0);
                break;
            }
        }
    } else {
        //buat data genap
        n /= 2;
        for(int i = 0; i < 16001; i++){
            // if(a[i]) printf("%d\n", i - 8000);
            n -= a[i];
            if(n < 0) {
                printf("%.2lf\n", i - 8000.0);
                break;
            } 
            if(n == 0){
                int j;
                double median;
                for(j = i + 1; j < 16001; j++){
                    if(a[j]){
                        break;
                    }
                }
                median = ((i - 8000) + (j - 8000)) / 2.0;
                printf("%.2lf\n", median);
                break;
            }
        }
    }
    // printf("%d", n);
    return 0;
}