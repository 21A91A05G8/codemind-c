#include<stdio.h>
int main()
{
    int arr[100],i,n,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            p=i;
        }
    }
    printf("%d",p);
}