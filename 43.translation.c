// 43. A. Translation(41)
#include<stdio.h>
#include<string.h>
int main(){
	char t[101],s[101];
	scanf("%s %s",t,s);
	puts(strcmp(t,strrev(s)) ? "NO" : "YES");
	return 0;}
	