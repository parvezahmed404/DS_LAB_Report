// 44. A. Ball Game(46)
#include<stdio.h>
int main() {
	int n; scanf("%d", &n);
	int j = 0;
	for (int i = 0; i < n - 1; ++i) {
		j += i + 1;
		printf("%d ", j % n + 1);
	}
	return 0;}
	