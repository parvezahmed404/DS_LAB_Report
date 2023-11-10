// 12. Next Round (158A Codeforces)


#include <stdio.h>
int main()
{
    int n,k, arr[100], total = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    int kth= arr[k-1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=kth && arr[i]> 0)
        {
            total++;
        }      
    }
    printf("%d", total);
    return 0;
}