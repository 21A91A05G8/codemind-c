#include<stdio.h>
int digit_count(int n)
{
    int d,dc=0;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        dc++;
    }
    return dc;
}
int main()
{
    int n,arr[100],i,min=1000,dc=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        dc=digit_count(arr[i]);
        if(dc<min)
        {
            min=dc;
        }
    }
    for(i=0;i<n;i++)
    {
        if(digit_count(arr[i])==min)
        {
            c++;
        }
    }
    printf("%d",c);
}