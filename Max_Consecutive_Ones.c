#include<stdio.h>
int main()
{
    int n,c=0,max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            c++;
        }
        if(arr[i]==0)
        {
            if(max<c)
            {
                max=c;
            }
            c=0;
        }
    }
    if(max<c)
    {
        max=c;
    }
    printf("%d",max);
}