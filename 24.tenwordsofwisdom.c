//24. B. Ten Words of Wisdom(1850)

#include <stdio.h>
int findWinner(int n, int a[], int b[])
{   int max_quality = -1;
    int winner_index = -1;
    for (int i = 0; i < n; i++)
    {
    if (a[i] <= 10)
        { if (b[i] > max_quality)
            {   max_quality = b[i];
                winner_index = i + 1;
            }
        }
    }
    return winner_index;
}
int main()
{
    int t;
    scanf("%d", &t);
 
    while (t--)
    {
        int n;
        scanf("%d", &n);
 
        int a[50], b[50];
 
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a[i], &b[i]);
        }
        int winner = findWinner(n, a, b);
        printf("%d\n", winner);
    }
 return 0;}
 