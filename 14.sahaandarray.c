// 14.  50. A. Sasha and Array Coloring (1843)
#include <stdio.h>
int main()
{   int t, n, arr[51];
    scanf("%d", &t);
    while (t--)
    {   int sum = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])// 1, 5, 3, 4, 6
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }}}
        for (int j = 0; j < n/2; j++)
        {   int los = arr[n-1-j]-arr[j];
            sum +=los;}
    printf("%d\n", sum);}
    return 0;}


