#include<stdio.h>
int main()
{
    int i,n,arr[100],sum1=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        sum1=sum1+arr[i];
    }
    printf("%d",sum1);
}