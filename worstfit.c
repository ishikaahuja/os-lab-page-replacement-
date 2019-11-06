#include<stdio.h>
#include<stdlib.h>
int main()
{
    int psize[10],bsize[10],barray[10],parray[10];
    int i,j,k,flag;
    int np,nb,high=00;
    printf("enter no. of processes:");
    scanf("%d",&np);
    printf("enter no. of processes:");
    scanf("%d",&nb);
    printf("enter size of processes:");
    for(i=0;i<np;i++)
    {
       scanf("%d",&psize[i]);
       parray[i]=-1;
    }
    printf("enter size of blocks:");
    for(i=0;i<nb;i++)
    {
       scanf("%d",&bsize[i]);
    }
    printf("enter 1 if block already allocated else 0");

    for(i=0;i<nb;i++)
    {
       scanf("%d",&barray[i]);
    }
    for(i=0;i<np;i++)
    {
        for(j=0;j<nb;j++)
        {
            if(barray[j]==0)
            {
            flag=bsize[j]-psize[i];
            if(flag>=0)
            {
                if(high<=flag)
                {
                    parray[i]=j;
                    high=flag;

                }
            }
        }
        }
        high=00;
        k=parray[i];
        barray[k]=1;
    }
    for(i=0;i<np;i++)
    {
        printf("process %d-->%d",i+1,parray[i]+1);
    }


}
