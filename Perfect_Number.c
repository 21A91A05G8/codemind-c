#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}