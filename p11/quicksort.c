#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partitionFunc(int left, int right, int pivot, int data[])
{
    int index = left - 1;
    for (int i = left; i < right; i++)
    {
        /* code */
        if(data[i] <= pivot)
        {
            index++;
            swap(&data[i], &data[index]);
        }
    }
    index++;
    swap(&data[right], &data[index]);
    return index;
}

void quickSort(int left, int right, int data[])
{
    int pivot, partition;
    if(right - left <= 0) return;
    else {
        pivot = data[right];
        partition = partitionFunc(left, right, pivot, data);
        // quicksort left
        quickSort(left, partition - 1, data);
        // quicksort right
        quickSort(partition + 1, right, data);
    }
}

int main()
{
    int data[] = {14,13,56,21,16,3,88,31,36,16,63,5,27};
    int length = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("%d ", data[i]);
    }
    printf("\n");
    quickSort(0, length - 1, data);
    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}