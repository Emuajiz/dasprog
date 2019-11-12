#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct kota
{
    /* data */
    char name[50];
    int pos[50], sum;
};


int main()
{
    char input[100], *ptr;
    struct kota a;
    int b, length;
    while(fgets(input, 100, stdin))
    {
        b = 0;
        a.sum = 0;
        strtok(input, "\n");
        ptr = strtok(input, ",");
        strcpy(a.name, &ptr[1]);
        a.name[strlen(ptr) - 2] = '\0';
        printf("%s\n", a.name);
        while(ptr = strtok(NULL, ","))
        {
            a.pos[b] = atoi(ptr);
            printf("%d\n", a.pos[b]);            
            a.sum++;
            b++;
        }
        // printf("%s(%d)", a.name, a.sum);
        // for (int i = 0; i < a.sum; i++)
        // {
        //     /* code */
        //     if(!i) printf(":");
        //     printf("%d", a.pos[i]);
        //     if(i != a.sum - 1) printf("->");
        // }
        // printf("\n");
    }
    return 0;
}