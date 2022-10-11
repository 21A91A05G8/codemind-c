#include<stdio.h>
int main()
{
    int i,sum=0,n,m,c=0,arr[100],j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum==m)
            {
                c++;
            }
            if(sum>m)
            {
                break;
            }
        }
        sum=0;
    }
    printf("%d",c);
}