// 6.  A. Grasshopper on a Line (1837A Codeforces ) 

#include<stdio.h>
int main()
{
    int t,i,j,x,a,b;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d %d",&a,&b);
      if(a%b!=0)
      {
        printf("1\n");
        printf("%d\n",a);
      }
      else
      {
        printf("2\n");
        printf("%d %d\n",(a-(b+1)),b+1);
      }
    }
 
  return 0;
 
}