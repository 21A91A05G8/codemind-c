#include<stdio.h>
int main()
{
    int arr[100],rev=0,r,n,temp,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(temp)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        printf("%d ",rev);
        
    }
}