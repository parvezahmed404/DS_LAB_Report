// 20. A. Boy or Girl (236)

#include <stdio.h>
#include <string.h>
int main() {
    char str[101];
    scanf("%s", str);
    int distinctChars[26] = {0};
    for (int i = 0; i < strlen(str); i++) {
        distinctChars[str[i] - 'a'] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (distinctChars[i] == 1) {
            count++;
        }
    }
    if (count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
