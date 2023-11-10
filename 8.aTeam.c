//8. A Team (231A Codeforces )

#include <stdio.h>
int main()
{
    int n, arr[3], solve = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        if (sum >= 2)
        {
            solve++;       }
    }
    printf("%d", solve);
    return 0;
}