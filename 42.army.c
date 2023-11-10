// 42. A. Army(38)
#include<stdio.h>
int main() {
    int n, a, b, year = 0;
    scanf("%d", &n);
    int arr[101];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &a, &b);
    for (int i = a - 1; i < b - 1; i++) {
        year += arr[i];
    }  printf("%d", year);
    return 0;}
