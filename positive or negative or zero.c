#include <stdio.h>

int main() 
{
    int a;
    printf("enter the value \n:");
    scanf ("%d",&a);
if (a>0)
{
    printf("the condition is positive ");
}
else if(a<0)
{
    printf("the conition is negative ");
    }
    
else
{
    printf("the condition is zero");
}
}