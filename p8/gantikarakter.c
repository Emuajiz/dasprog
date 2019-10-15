#include <stdio.h>
#include <ctype.h>

int main()
{
    char cek = 65, a, b;
    scanf("%c %c ", &a, &b);
    if(isupper(a))
    {
        a += 32;
    }
    if(isupper(b))
    {
        b += 32;
    }
    // printf("%c %c\n", a, b);
    while(cek != '\n')
    {
        scanf("%c", &cek);
        if(isupper(cek))
        {
            if(cek+32 == a)
            {
                cek = b-32;
            }
        }
        else
        {
            if(cek == a)
            {
                cek = b;
            }
        }
        printf("%c", cek);
    }
    // printf("\n");
    return 0;
}