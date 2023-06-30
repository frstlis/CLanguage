//*************************************************************************
//* File Name: 06initarray.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-12  22-23-04====
//*************************************************************************


#include "stdio.h"
#include "string.h"
#include "06initarray.h"

int initarrayn(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}


int initarraya(int *arr,int n)
{
    // int i;
    // for(i=0;i<n;i++)
    //     scanf("%d",&arr[i]);
    memset(arr,0,n);
}