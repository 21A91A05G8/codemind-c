#include<stdio.h>
int main()
{
    int i,n,arr[100],sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum1+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum2+=arr[i];
    }
    printf("%d
%d",sum1,sum2);
}