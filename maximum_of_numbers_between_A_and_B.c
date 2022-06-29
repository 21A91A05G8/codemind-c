#include<stdio.h>
int main()
{
    int a,b,i,arr[100],c=0,max=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<=a && arr[i]>=b || arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}