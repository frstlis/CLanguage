//*************************************************************************
//* File Name: 04_bubblesort.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-12  17-51-40====
//*************************************************************************

#include "04_bubblesort.h"

int bubblesorta(int *arr,int size){
    int i,j,temp;
    for(i=0;i<size;i++)
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
}


int bubblesortd(int *arr,int size){
    int i,j,temp;
    for(i=0;i<size;i++)
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
}