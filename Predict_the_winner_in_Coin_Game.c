#include<stdio.h>
int main()
{
    int player2,player1,m,n;
    scanf("%d %d",&n,&m);
    if(m%2==0 || n%2==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}
