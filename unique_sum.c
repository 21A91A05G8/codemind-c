#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0,sum=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}