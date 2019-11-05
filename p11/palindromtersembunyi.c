#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int left, int right, char input[1001])
{
    while(right > left)
    {
        if (input[left++] != input[right--]) 
        { 
            return 0; 
        } 
    }
    return 1;
}

void hiddenPalindrome(char input[1001])
{
    int length = strlen(input);
    int b = 0;
    for (int i = 0; i < length - 2; i++)
    {
        /* code */
        for (int j = length - 1; j > i; j--)
        {
            /* code */
            if(input[i] == input[j])
            {
                if(isPalindrome(i, j, input) && j - i > 1)
                {
                    printf("YA\n");
                    b = 1;
                    break;
                }
            }
        }
        if(b) break;
    }
    if(!b) printf("TIDAK\n");
}

int main()
{
    int n, length;
    scanf("%d ", &n);
    char input[1001];

    for (int i = 0; i < n; i++)
    {
        /* code */
        fgets(input, 1001, stdin);
        strtok(input, "\n");
        // length = strlen(input);
        // printf("%s %d\n", input, length);
        hiddenPalindrome(input);
    }
    
    return 0;
}
