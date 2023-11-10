// 27. A. Twins(160)

#include <stdio.h>
int main()
{
    int n, arr[101];
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]>arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }}}
    int count = 0;
    int minsum = 0;
    for (int i = 0; i < n; i++)
    {
        minsum+=arr[i];
        count++;
        if (minsum >sum - minsum)
        {
            break;
        }
        
    }
    printf("%d\n", count);
 return 0;}
 