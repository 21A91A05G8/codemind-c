#include<stdio.h>
int main()
{
    int arr[100],i,j,c=0,c1=0,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            if(arr[i]<=k)
            {
                c1++;
            }
        }
    }
    printf("%d",c1);
    
}