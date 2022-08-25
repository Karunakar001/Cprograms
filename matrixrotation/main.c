#include<stdio.h>
#include<stdlib.h>
int a[10][10];


void printArray(int n)
{
    int i,j,temp;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int reverse(int n)
{
    int i,j,temp,first,last;                            
    for(i=0;i<n;i++)                                    
    {                                                   
        first=0;                                                
        last=n-1;
        while(first<last)
        {
          temp= a[i][first];
          a[i][first]=a[i][last];
          a[i][last]=temp;
          first++;
          last--;
        }
    }
}

void transpose(int n)
{
    int i,j,temp;
   for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
}









void main()
{   int n,i,j,temp;
    printf("\nEnter the size:\t ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Before reverse\n");
    printArray(n);
    
    reverse(n);
    printf("\n After reverse\n");

    printArray(n);
    
    printf("\n Finally result\n");
    transpose(n);

    printArray(n);
    
    

    
    
}


