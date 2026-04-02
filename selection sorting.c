#include<stdio.h>
int main()
{
    int a[100],i,j,n,swap,min;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sort an array using selection sort\n");
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if( a[min]>a[j])
            {
                min=j;
            }
        }
        swap=a[i];
        a[i]=a[min];
        a[min]=swap;
    }
    printf("the sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}