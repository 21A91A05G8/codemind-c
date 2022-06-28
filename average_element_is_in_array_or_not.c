#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0,c=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            c=c+1;
        }
    }
    if(c!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}