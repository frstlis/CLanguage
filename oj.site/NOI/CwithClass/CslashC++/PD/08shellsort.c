//*************************************************************************
//* File Name: 08shellsort.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com
//* Created And Modified Time: ====2018-12-13  04-55-30====
//*************************************************************************



#include "08shellsort.h"

int shellsorta(int *arr, int size)
{
    int i,j,k,tem,gap;
    for(gap=size/2;gap>0;gap/=2)
    {
        for(i=0;i<size;i++)
        {
            for(j=i+gap;j<size;j+=gap)
            {
                if(arr[j]<arr[j-gap])   //升序、降序反向
                {
                    tem=arr[j];
                    k=j-gap;
                    while(k>=0&&arr[k]>tem)     //升序、降序反向
                    {
                        arr[k+gap]=arr[k];
                        k=k-gap;
                    }
                    arr[k+gap]=tem;
                }
            }
        }
    }
}




int shellsortd(int *arr, int size)
{
    int i,j,k,tem,gap;
    for(gap=gap/2;gap>0;gap/=2)
    {
        for(i=0;i<size;i++)
        {
            for(j=i+gap;j<size;j+=gap)
            {
                if(arr[j]>arr[j-gap])
                {
                    tem=arr[j];
                    k=j-gap;
                    while(k>=0 && arr[k]<tem)
                    {
                        arr[k+gap]=arr[k];
                        k=k-gap;
                    }
                    arr[k+gap]=tem;
                }
            }
        }
    }
}