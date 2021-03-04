#include <stdio.h>

int main()
{
    int x,i,j,max,min,mx,mn;
    scanf("%d",&x);
    int score[x][3];
    int ans[x];
    int ans3[x-2];
    for(i=0;i<x;i++)
    {   ans[i]=0;
        for(j=0;j<3;j++)
            score[i][j]=0;
    }

    for( i=0;i<x;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&score[i][j]);

        }
    }
    for( i=0;i<x;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==0)
                score[i][j]=score[i][j]*4;
            else if(j==1)
                score[i][j]=score[i][j]*2;
            else if(j==2)
                score[i][j]=score[i][j]*1;
            ans[i]=ans[i]+score[i][j];


        }

    }

    for(i=0;i<x-2;i++)
    {
        ans3[i]=ans[i]+ans[i+1]+ans[i+2];
    }


    max=ans3[0];
    mx=0;
    min=ans3[0];
    mn=0;
    for(i=1;i<x-2;i++)
    {
        if(max<ans3[i])
        {
            max=ans3[i];
            mx=i;
        }
        if (min > ans3[i])
        {
            min=ans3[i];
            mn=i;

        }
    }
   printf("%d %d",mx+1,mn+1);
}
