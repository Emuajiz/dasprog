#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int diagonalCheck()
{

}

int verticalCheck()
{

}

int horizontalCheck()
{

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