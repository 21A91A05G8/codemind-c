#include<stdio.h>
int main()
{
    int i,n,arr[100],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)
        {
            p=i;
        }
    }
    printf("%d",p);
}