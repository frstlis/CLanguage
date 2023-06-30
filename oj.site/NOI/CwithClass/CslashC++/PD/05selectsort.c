//*************************************************************************
//* File Name: 05selectsort.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-12  17-45-34====
//*************************************************************************


#include "05selectsort.h"


int selectsorta(int *arr, int size)
{
    int i,j,k,temp;
    for(i=0;i<size-1;i++)
    {
        k=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
}


int selectsortd(int *arr, int size)
{
    int i,j,k,temp;
    for(i=0;i<size-1;i++)
    {
        k=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]>arr[k])
            {
                k=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
}