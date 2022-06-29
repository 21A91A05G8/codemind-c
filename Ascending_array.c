#include<stdio.h>
int main()
{
    int arr[100],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
    }
    if(c==n-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}