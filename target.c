#include <stdio.h>

int main()
{
   int size;
   printf("enter the number of elements to store:\n");
   scanf("%d",&size);
   int a[size];
   for(int i=0; i<=size-1;i++)
   {
       printf("enter the %d value :\n",(i+1));
       scanf("%d",&a[i]);
   }
   int k;
   printf("enter the target sum value :\n");
   scanf("%d",&k);
   for(int i=0;i<=size-1;i++)
   {
    for(int j=i+1;j<=size-1;j++)
    
        if(a[i]+a[j]==k)
    {
        printf("%d,%d",a[i],a[j]);
    }
    }
}