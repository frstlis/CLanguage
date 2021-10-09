//*************************************************************************
//* File Name: 07insertsort.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-12  23-37-12====
//*************************************************************************

#include "07insertsort.h"
int insertsorta(int *arr, int size)
{
    int i,j,tmp;
    for(i=1;i<size;i++)
    {
        if(arr[i]<arr[i-1])
        {
            tmp= arr[i];
            for(j=i-1;j>=0 && arr[j]>tmp;j--)
                arr[j+1]=arr[j];
        }
        arr[j+1]=tmp;
    }
}

int insertsortd(int *arr, int size)
{
    int i,j,tmp;
    for(i=1;i<size;i++)
    {
        if(arr[i]>arr[i-1])
        {
            tmp= arr[i];
            for(j=i-1;j>=0 && arr[j]<tmp;j--)
                arr[j+1]=arr[j];
        }
        arr[j+1]=tmp;
    }
}


