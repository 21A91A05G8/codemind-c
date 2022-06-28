#include<stdio.h>
int main()
{
    int arr[100][100],i,j,n,m,sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}