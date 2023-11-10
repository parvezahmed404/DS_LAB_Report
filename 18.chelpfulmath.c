// 18. A. Helpful Maths (339)
#include <stdio.h>
#include <string.h>
int main()
{   char s[100];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '+')
        {
            s[k++] = s[i];
        }
    }
    s[k] = '\0';
    for (int i = 0; i < k; i++)
    {
        printf("%c", s[i]);
        if (i < k - 1)
        {
            printf("+");
        }
    }
    printf("\n");
    return 0;}
