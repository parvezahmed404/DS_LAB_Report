// 50. A. Nearly Lucky Number(110)

#include <stdio.h>
int main() { int i = 0;
    char c;
    while ((c = getchar()) != '\n') i += (c == '4' || c == '7');
    printf(i == 4 || i == 7 ? "YES" : "NO");
    return 0;}


    
