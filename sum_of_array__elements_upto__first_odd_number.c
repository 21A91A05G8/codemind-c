#include<stdio.h>
int main()
{
    int i,n,arr[100],sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum1+=arr[i];
        }
        if(arr[i]%2!=0)
        {
            break;
        }
    }
    printf("%d",sum1);
    
    
}