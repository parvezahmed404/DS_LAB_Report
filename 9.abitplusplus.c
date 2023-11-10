//10. A. Bit++ (282A Codeforces )

#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    int x = 0;
    
    for (int i = 0; i < n; i++) {
        char statement[4];
        scanf("%s", statement);
        
        if (strcmp(statement, "++X") == 0 || strcmp(statement, "X++") == 0) {
            x++;
        } else {
            x--;
        }
    }
    
    printf("%d", x);
    
    return 0;
}
