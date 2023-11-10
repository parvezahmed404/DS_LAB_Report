// 2. A - Love Story- (1829A Codeforces)
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100], cforce[] = "codeforces";
    int n;
    scanf("%d", &n);
 
    while (n--)
    {
        int count = 0;
 
        scanf("%s", s);
 
        int len = strlen(s);
        for (int i = 0; i < len && i < strlen(cforce); i++)
        {
            if (s[i] != cforce[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
 
    return 0;
}