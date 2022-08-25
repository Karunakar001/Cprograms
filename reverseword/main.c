#include<stdio.h>
#include<string.h>

void main()
{
    char s[100],i,j,k;
    printf("\n Enter the string:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
    }
    k=i-1;
    printf("%d\n",i);
    printf("%c",s[0]);
    for(j=i-2;j>=1;j--)
    {
        printf("%c",s[j]);
    }
    printf("%c",s[k]);
}