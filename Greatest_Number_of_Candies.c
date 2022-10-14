#include<stdio.h>
int main()
{
    int n,arr[100],x,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]+x>=max)
        {
            max=arr[i];
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}