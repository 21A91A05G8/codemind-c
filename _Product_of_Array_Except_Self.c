#include<stdio.h>
int main()
{
    int n,arr[100],p=1,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                p*=arr[j];
            }
        }
        printf("%d ",p);
    }
}