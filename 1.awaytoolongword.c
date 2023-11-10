// 1. A. Way Too Long Words (71A Codeforces)
#include <stdio.h>
#include <string.h>
int main()
{
    char input[1000];
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        scanf("%s", input);
 
        int len = strlen(input);
 
        if (len <= 10)
        {
            printf("%s\n", input);
        }
        else if (len > 10)
        {
            printf("%c%d%c\n", input[0], len - 2, input[len-1]);
        }
    }
    return 0;
}