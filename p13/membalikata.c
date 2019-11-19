#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void rev_print(char inp[500])
{
    int tmpLen = strlen(inp);
    for (int i = tmpLen; i > 0; i--)
    {
        /* code */
        printf("%c", inp[i-1]);
    }
}

int main()
{
    char inputLine[5001], tmpC[500];
    fgets(inputLine, 5001, stdin);
    int tmCount = 0;
    // printf("%s", inputLine);
    strtok(inputLine, "\n");
    for (int i = 0, tLen = strlen(inputLine); i < tLen; i++)
    {
        /* code */
        if(inputLine[i] == ' ' || inputLine[i] == '.' || inputLine[i] == ',')
        {
            printf("%c", inputLine[i]);
            tmCount = 0;
        }
        else
        {
            tmCount++;
        }
    }
    
    return 0;
}