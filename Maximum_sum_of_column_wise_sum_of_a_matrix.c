#include<stdio.h>
int main()
{
    int arr[100][100],i,j,m,n,sum=0,max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d",max);
    
}