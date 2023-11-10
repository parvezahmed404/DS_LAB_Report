// 46. A. Sleuth(49)

#include<stdio.h>
#include<string.h>
int main()
{   char e[105],c;
    int length, i;
    gets(e);
    length=strlen(e);
    for(i=length-2;i>=0;i--)
    {
        if(e[i]!=' ')
        {c=e[i]; break;}
    }
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='Y') printf("YES\n");
    else printf("NO\n");    
    return 0;}

