#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            c=c+1;
        }
    }
    if(c==0)
    {
        printf("0");
    }
    else
    {
        printf("%d",c);
    }
}