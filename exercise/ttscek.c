#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int diagonalCheck(int n, int m,char text[SIZE][SIZE], char cek[SIZE])
{
    int sizeCek = strlen(cek);
    for(int i = 0; i < sizeCek; i++)
    {
        if(!(cek[i] == text[i][i]))
        {
            return -1;
        }
    }
    // return -1;
}

int verticalCheck(char text[SIZE], char cek[SIZE])
{
    return -1;
}

int horizontalCheck(char text[SIZE], char cek[SIZE])
{
    return -1;
}

int main()
{
    char box[4][5] = {"ABCD","ESFG","HJIK","LMNK"};
    char input[SIZE];
    fgets(input, SIZE, stdin);
    strtok(input, "\n");
    printf("%c %lu\n", box[1][1], strlen(input));
    return 0;
}