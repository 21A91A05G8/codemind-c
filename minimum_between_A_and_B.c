#include<stdio.h>
int main()
{
    int arr[100],i,min=1000,c=0,a,b,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]<min)
            {
                min=arr[i];
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("%d",min);
    }
    else
    {
        printf("%d",-1);
    }
}
    