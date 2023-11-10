// 22. A. Calculating Function(486)

#include <stdio.h>
int main()
{   long long int n, esum = 0, osum = 0;
    scanf("%lld", &n);
    if (n % 2 == 0)
    {n /= 2; esum = n * (n + 1); osum = n * n;}
    else
    {n /= 2; esum = n * (n + 1); n += 1; osum = n * n;}
    printf("%lld\n", esum - osum);
    return 0;}
