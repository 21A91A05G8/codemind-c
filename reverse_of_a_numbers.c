#include<stdio.h>
int main()
{
    int N,rev=0,r;
    scanf("%d",&N);
    while(N>0)
    {
        r=N%10;
        rev=rev*10+r;
        N=N/10;
    }
    printf("%d",rev);
}