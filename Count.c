#include<stdio.h>
int main()
{
    int n,arr[100],c=0,c1=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }
        if(arr[i]%2!=0)
        {
            c1++;
        }
    }
    printf("%d %d",c,c1);
}