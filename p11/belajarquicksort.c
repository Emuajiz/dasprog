#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct mahasiswa
{
    /* data */
    char NIM[10], nama[50], kota[30];
    float IPK;
};

void swap(struct mahasiswa *a, struct mahasiswa *b)
{
    struct mahasiswa tmp = *a;
    *a = *b;
    *b = tmp;
}

int partitionFunc(int left, int right, char pivot[20], struct mahasiswa data[])
{
    int index = left - 1;
    for (int i = left; i < right; i++)
    {
        /* code */
        if(strcmp(pivot, data[i].NIM) >= 0)
        {
            index++;
            swap(&data[i], &data[index]);
        }
    }
    index++;
    swap(&data[right], &data[index]);
    return index;
}

void quickSort(int left, int right, struct mahasiswa data[])
{
    char pivot[20];
    int partition;
    if(right - left <= 0) return;
    else {
        strcpy(pivot, data[right].NIM);
        // pivot = data[right];
        partition = partitionFunc(left, right, pivot, data);
        // quicksort left
        quickSort(left, partition - 1, data);
        // quicksort right
        quickSort(partition + 1, right, data);
    }
}

int main()
{
    char input[100];
    int n, i;
    i = 0;
    scanf("%d ", &n);
    struct mahasiswa data[n];
    char * ptr;
    // printf("%lu\n", sizeof(struct mahasiswa));
    for(i = 0; i < n; i++)
    {
        fgets(input, 100, stdin);
        strtok(input, "\n");

        // ambil nim
        ptr = strtok(input, ",");
        strcpy(data[i].NIM, ptr);
        // printf("%s ", data[i].NIM);

        // ambil nama
        ptr = strtok(NULL, ",");
        strcpy(data[i].nama, ptr);
        // printf("%s ", data[i].nama);

        // ambil IPK
        ptr = strtok(NULL, ",");
        data[i].IPK = atof(ptr);
        // printf("%.2f ", data[i].IPK);

        // ambil kota
        ptr = strtok(NULL, ",");
        strcpy(data[i].kota, ptr);
        // printf("%s\n", data[i].kota);
    }

    // printf("%d\n", strcmp(data[0].NIM, data[1].NIM));
    // printf("%s %s\n", data[0].NIM, data[1].NIM);
    // struct mahasiswa tmp;
    // tmp = data[0];
    // data[0] = data[1];
    // data[1] = tmp;
    // printf("%s %s\n", data[0].NIM, data[1].NIM);
    
    quickSort(0, n - 1, data);
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("%s %s\n", data[i].NIM, data[i].nama);
    }
    
    // printf("%s %s\n", data[0].NIM, data[1].NIM);

    return 0;
}