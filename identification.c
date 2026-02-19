#include<stdio.h>
int main()
{
    char what;
    printf("the the given character is:");
    scanf("%c",&what);
    if(what>='A'||what>='a' && what<='Z'||what<='z')
    {
        printf("the character is an alphabet %c");
    }
    else if(what>='0' && what<='9')
    {
        printf("the character is a digit %c");
    }
    else
    {
        printf("the character is a special character %c");
    }
    return 0;
}