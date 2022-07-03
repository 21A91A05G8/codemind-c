#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0,c1=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    if(2*c==c1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}