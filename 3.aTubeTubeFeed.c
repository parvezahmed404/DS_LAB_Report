// 3. A - TubeTube Feed (1822A Codeforces )
#include <stdio.h>
int main()
{
    int q, t, n, dur[101], ent[101];
    scanf("%d", &q);

    while (q--)
    {
        scanf("%d %d", &n, &t);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &dur[i]);
        }

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ent[j]);
        }

        int maxent = 0;
        int index = -2;
        for (int k = 0; k < n; k++)
        {
            if (dur[k] <= t - k && ent[k] > maxent)
            {
                maxent = ent[k];
                index = k;
            }
        }

        printf("%d\n", index + 1);
    }

    return 0;
}