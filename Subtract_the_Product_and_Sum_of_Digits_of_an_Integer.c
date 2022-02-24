#include<stdio.h>
int main()
{
    int n,k,d,sum=0,product=1,diff;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        product=product*d;
        n=n/10;
    }
    diff=product-sum;
    printf("%d",diff);
}