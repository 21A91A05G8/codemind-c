#include<stdio.h>
int main()
{
    int largest=0,n,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(largest<r)
        {
            largest=r;
        }
        n=n/10;
    }
    printf("%d",largest);
}