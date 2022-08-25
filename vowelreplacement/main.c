#include<stdio.h>
#include<string.h>


void main()
{
    char s[100],i,size,k,j;
    char vowels[]={'a','e','i','o','u','A','E','I','O','U','\0'};
    char numbers[]={'1','2','3','4','5','6','7','8','9','\0'};
    gets(s);
    size=sizeof(s)/sizeof(s[i]);
    k=0;
    for(i=0;s[i]!='\0';i++)
    {
        
        for(j=0;vowels[j]!='\0';j++)
        {
            
            if(k==9)
            {
                k=0;
            }
            if(s[i]==vowels[j])
            {
              s[i]=numbers[k];
              k++;
            }
            
        }
    }
    for(j=i;j>=0;j--)
    {                                   // this line contributed by prof. shameer
        printf("%c",s[j]);
    }
}
