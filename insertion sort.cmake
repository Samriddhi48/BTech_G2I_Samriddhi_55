#include<stdio.h>
int main()
{
    int a[100],i,j,n,swap;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sort an array using insertion sorting\n");
    for(i=1;i<n-1;i++)
    {
        swap=a[i];
        j=i-1;
        while(swap<a[j)&&(j=<0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]swap;
    }
    printf("the sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}