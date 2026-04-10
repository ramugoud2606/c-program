#include <stdio.h>

int main() {
    char ch;
    printf("enter the character ");
    scanf("%d",&ch);
    int result = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    printf("the %c is an vowels is :%d,ch,result");
}