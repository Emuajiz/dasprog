#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[1000];
    int multiplyer[100], pos[100][2];
    fgets(text, 1000, stdin);
    strtok(text, "\n");
    // printf("%s", text);
    long panjang = strlen(text), kurungbuka = 0, kurungan = 0, kurungtutup = 0;
    for (int i = 0; i < panjang; i++)
    {
        if(isalpha(text[i]))
            printf("%c ", text[i]);
        else if(text[i] == '(')
        {
            pos[kurungbuka][0] = i;
            kurungbuka++;
        }
        else if(text[i] == ')')
        {
            pos[kurungtutup][1] = i;
            kurungtutup++;
            kurungan++;
        }
    }
    for (int i = 0; i < kurungan; i++)
    {
        printf("%d %d\n", pos[i][0], pos[i][1]);
    }
    
    return 0;
}
