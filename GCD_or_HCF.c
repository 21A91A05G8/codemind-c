#include<stdio.h>
int main()
{
    int gcd,a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0  && b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
    
}