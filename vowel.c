#include<stdio.h>
int main ()
{
char alphabet;
printf("the given alphabet is:");
scanf("%c",&alphabet);
if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'||alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
{
    printf("the alphabet is a vowel");
}
else{
    printf("the alphabet is a consonant");
}
return 0;
}