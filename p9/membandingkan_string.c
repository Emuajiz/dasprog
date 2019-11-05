#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    char text[100], split[2][100];
    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        fgets(text, 100, stdin);
        strtok(text, "\n");
        // printf("%s", text);
        char *ptr = strtok(text, ":");
        strcpy(split[0], ptr);
        ptr = strtok(NULL, ":");
        strcpy(split[1], ptr);
        // printf("%s %s\n", split[0], split[1]);
        if(strlen(split[0]) == strlen(split[1]))
        {
            if(strcmp(split[0], split[1]) == 0)
            printf("S\n");
            else
            printf("X\n");
        }
        else if(strlen(split[0]) > strlen(split[1]))
        {
            printf("L\n");
        }else if(strlen(split[0]) < strlen(split[1]))
        {
            printf("U\n");
        }
    }
    
    return 0;
}