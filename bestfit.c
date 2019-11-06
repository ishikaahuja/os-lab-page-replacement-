#include<stdio.h>
#include<stdlib.h>
int high=999;
int low=000;
int sort(int *arr)
{
    int i,j,temp;
    for(i=0;i<sizeof(arr);i++)
    {
        for(j=i+1;j<sizeof(arr);j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=arr[i];
            }
        }
    }

}
