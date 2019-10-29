#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char delim[] = ",";
    char input[100];
    char nim[100][10];
    char nama[100][50];
    float ipk[100];
    int n;
    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        // baca data
        fgets(input, 100, stdin);
        // ambil nim doang
        char *ptr = strtok(input, delim);
        // copy nim nya ke array nim
        strcpy(nim[i], ptr);
        // ambil namanya aja
        ptr = strtok(NULL, delim);
        // copy namanya ke array nama
        strcpy(nama[i], ptr);
        // ambil ipk nya
        ptr = strtok(NULL, delim);
        // jadiin float nim nya
        ipk[i] = strtof(ptr, NULL);
    }
    
    for (int i = 0; i < n; i++)
    {
        // print data nya
        printf("'%s' ", nim[i]);
        printf("'%s' ", nama[i]);
        printf("'%f'\n", ipk[i]);
    }
    
    return 0;
}