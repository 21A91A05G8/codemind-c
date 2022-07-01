#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,j,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<100;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            max=i;
        }
    }
    printf("%d",max);
}