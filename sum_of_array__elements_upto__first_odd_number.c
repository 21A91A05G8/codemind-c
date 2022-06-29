#include<stdio.h>
int main()
{
    int sum=0,arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
        if(arr[i]%2!=0)
        {
            break;
        }
    }
    printf("%d",sum);
}