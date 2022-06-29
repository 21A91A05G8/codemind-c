#include<stdio.h>
int main()
{
    int a,b,arr[100],i,x,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(b<=arr[i] && a>=arr[i] || b>=arr[i] && a<=arr[i])
        {
            printf("%d ",arr[i]);
            x++;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
}