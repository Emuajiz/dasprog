#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct mahasiswa
{
    /* data */
    char nama[30], NIM[10];
    int usia, JK;
    float IPK;
};


int main()
{
    char input[50];
    struct mahasiswa data[50];
    int i = 0;
    float ipkSum = 0, averageIPK;
    
    while(fgets(input, 50, stdin))
    {
        strtok(input, "\n");
        // ambil namanya
        char *ptr = strtok(input, ",");
        strncpy(data[i].nama, &ptr[1], strlen(ptr) - 2);
        data[i].nama[strlen(ptr) - 2] = '\0';
        // printf("Nama: %s %lu ", data[i].nama, strlen(ptr));

        // ambil nimnya
        ptr = strtok(NULL, ",");
        strncpy(data[i].NIM, &ptr[1], 9);
        data[i].NIM[9] = '\0';
        // printf("NIM: %s ", data[i].NIM);

        // ambil usianya
        ptr = strtok(NULL, ",");
        data[i].usia = atoi(ptr);
        // printf("Usia: %d ", data[i].usia);

        // ambil JK nya
        ptr = strtok(NULL, ",");
        data[i].JK = atoi(ptr);
        // printf("JK: %d ", data[i].JK);

        // ambil IPK-nya
        ptr = strtok(NULL, ",");
        data[i].IPK = atof(ptr);
        ipkSum += data[i].IPK;
        // printf("IP: %.2f\n", data[i].IPK);
        i++;
    }
    averageIPK = ipkSum / i;
    printf("%.2f\n", averageIPK);

    for (int j = 0; j < i; j++)
    {
        /* code */
        if(data[j].IPK < averageIPK) printf("%s\n", data[j].nama);
    }
    
    return 0;
}