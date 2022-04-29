#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,m,x;
    scanf("%d%d%d",&a,&b,&c);
    x=pow(a,b);
    m=x%c;
    printf("%d",m);
    
}