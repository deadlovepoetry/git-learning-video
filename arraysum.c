#include<stdio.h>
void main()
{
    int a[100],i,j=0,n;
    printf("enter the value of n=");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        j=j+a[i];
    }
    printf("sum is %d",j);

}