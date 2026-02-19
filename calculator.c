#include<stdio.h>
int main ()
{
int a,b,c;
char o;
printf("enter the values of a");
scanf("%d",&a);
printf("enter the values of b");
scanf("%d",&b);
printf("enter the operator o");
scanf(" %c",&o);

switch(o)
{
    case '+': c=a+b;
    printf("sum:%d",c);
    break;
    case '-': c=a-b;
    printf("difference:%d",c);
    break;
    case '*': c=a*b;
    printf("multiplication:%d",c);
    break;
    case '/': c=a/b;
    printf("division:%d",c);
    break;
}
return 0;
}

