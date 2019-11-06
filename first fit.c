#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,flag,n,nblocks,segments[20],bsize[20],psize[10],ballot[15];
printf("enter the no. of processes");
scanf("%d",&n);
printf("enter the size of processes");
for(i=0;i<n;i++)
{
    scanf("%d",&psize[i]);
}
printf("enter the no. of blocks");
scanf("%d",&nblocks);
printf("enter the size of blocks");
for(i=0;i<nblocks;i++)
{
    scanf("%d",&bsize[i]);
}
printf("if the block is alreay alloted press 1 else 0\n");
for(i=0;i<nblocks;i++)
{
    scanf("%d",&ballot[i]);
}
for(i=0;i<n;i++)
{
    flag=0;
    for(j=0;j<nblocks;j++)
    {
        if (psize[i]<=bsize[j] && flag==0)
        {
            if(ballot[j]==0)
            {
             ballot[j]=1;
             printf("process %d is alloted to %d\n",i+1,j+1);
             flag=1;
            }


        }

    }
    if(flag==0)
        {

            printf("process too large to be alloted or no space available\n");
        }
}
return 0;
}

