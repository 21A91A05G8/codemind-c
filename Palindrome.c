#include<stdio.h>
int main()
{
    int N,rem,temp,sum=0;
    scanf("%d",&N);
    temp=N;
    while(N)
    {
        rem=N%10;
        sum=(sum*10)+rem;
        N=N/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}