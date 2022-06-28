#include<stdio.h>
int main()
{
    int arr[100][100],n,m,i,j,sum=0;
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
            if(i==j || (i+j==n-1))
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}