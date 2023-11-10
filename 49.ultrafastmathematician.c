// 49.A. Ultra-Fast Mathematician(61)
#include<stdio.h>
int main(){
       char a[101],b[101];
       scanf("%s%s",a,b);
       for(int i=0;a[i];i++) printf("%d",a[i]^b[i]);
return 0;}
