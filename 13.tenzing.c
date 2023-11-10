// 13. A. Tenzing and Tsondu (1842A Codeforces)

#include <stdio.h>
 
int main()
{
    long long int t;
    scanf("%lld", &t);
 
    while (t--)
    {
        long long int n, m;
        scanf("%lld %lld", &n, &m);
 
        long long int a[50], b[50];
        long long int sumA = 0, sumB = 0;
 
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            sumA += a[i];
        }
 
        for (long long int i = 0; i < m; i++)
        {
            scanf("%lld", &b[i]);
            sumB += b[i];
        }
 
        if (sumA > sumB)
            printf("Tsondu\n");
        else if (sumA < sumB)
            printf("Tenzing\n");
        else
            printf("Draw\n");
    }
 
    return 0;
}