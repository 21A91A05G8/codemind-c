#include<stdio.h>
int main()
{
    int rev=0,temp,c=0,n,arr[100],i,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(temp)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(rev==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}