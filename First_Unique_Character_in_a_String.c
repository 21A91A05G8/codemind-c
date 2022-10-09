#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,j,c;
    for(i=0;str[i]!=NULL;i++)
    {
        c=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d",i);
            break;
        }
    }
    if(c!=1)
    {
        printf("-1");
    }
}