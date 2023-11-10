// 28. A. Candies(306)

#include <stdio.h>
 
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int quotient = n / m;
    int remainder = n % m;
    for (int i = m-remainder; i >0; i--) printf("%d ", quotient);
    for (int j = remainder; j >0; j--) printf("%d ", quotient + 1);
 return 0;}
 