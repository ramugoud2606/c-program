#include <stdio.h>

int main() {
    char ch;
printf("enter the charcter :\n");
scanf("%c",&ch);
int ll=(ch>='A');
int ul=(ch<='Z');
int result =ll && ul;
printf("the %c is the range of A to z is :%d" ,ch,result);
    
}