#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s, before = '\0';
    int count;
    // fgets(s, 100001, stdin);
    // strtok(s, "\n");
    // int length = strlen(s);
    while(1)
    {
        scanf("%c", &s);
        if(s == '\n' || s == EOF) break;
        else
        {
    // for (int i = 0; i < length; i++)
    // {
        /* code */
            if(isalpha(s))
            {
                if(s > 91)
                    s -= 32;
                if(before == '\0')
                {
                    count = 1;
                    before = s;
                }
                else if(s != before)
                {   
                    printf("%d%c", count, before);
                    count = 1;
                    before = s;
                }
                else
                {
                    count++;
                }
            }
    // }
        // printf("%c\n", s);
        }
    }
    printf("%d%c", count, before);
    return 0;
}