//*************************************************************************
//* File Name: 10quicksort.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-15  08-35-37====
//*************************************************************************


#include "10quicksort.h"
/*
 * 快速排序
 *
 * 参数说明：
 *     a -- 待排序的数组
 *     l -- 数组的左边界(例如，从起始位置开始排序，则l=0)
 *     r -- 数组的右边界(例如，排序截至到数组末尾，则r=a.length-1)
 */
void quicksort(int *arr, int l, int r)
{
    if (l < r)
    {
        int i,j,x;

        i = l;
        j = r;
        x = arr[i];
        while (i < j)
        {
            while(i < j && arr[j] > x)
                j--; // 从右向左找第一个小于x的数
            if(i < j)
                arr[i++] = arr[j];
            while(i < j && arr[i] < x)
                i++; // 从左向右找第一个大于x的数
            if(i < j)
                arr[j--] = arr[i];
        }
        arr[i] = x;
        quicksort(arr, l, i-1); /* 递归调用 */
        quicksort(arr, i+1, r); /* 递归调用 */
    }
}