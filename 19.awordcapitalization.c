// 19. A. Word Capitalization(281)

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0';
        str[0] = toupper(str[0]);
        printf("%s\n", str);}
        return 0;}
