#include<stdio.h>
#include<string.h>
int main()
{
    int i,x=0;
    char a[200];
    scanf("%s" ,a);
    i=strlen(a);
    while(x<i)
    {
        if(a[x]!=a[x+1])
        {
            printf("%c" ,a[x]);
        }
        x++;
    }
    return 0;
}
