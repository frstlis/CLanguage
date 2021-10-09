//*************************************************************************
//* File Name: 15radixsort.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-16  20-08-47====
//*************************************************************************

#include <stdio.h>
#include <string.h>
 
/* 获取输入数字的索引值，dec指定数字的位数，3代表百位数，order指定需要获取哪一位的索引，1代表个位，2代表十位，3代表百位 */
int get_index(int num, int dec, int order)
{
    int i, j, n;
    int index;
    int div;
 
    /* 根据位数，循环减去不需要的高位数字 */
    for (i=dec; i>order; i--) {
        n = 1;
        for (j=0; j<dec-1; j++)
            n *= 10;
        div = num/n;
        num -= div * n;
        dec--;
    }
 
    /* 获得对应位数的整数 */
    n = 1;
    for (i=0; i<order-1; i++)
        n *= 10 ;
 
    /* 获取index */
    index = num / n;
 
    return index;
}
 
// 进行基数排序 
// len /* 测试数据个数 */
// dec  数据位数，3代表3位数 
// order /* 排序的位数，1代表个位、2代表十位、3代表百位 */

void radix_sort(int array[], int len, int dec, int order)
{
    int i, j;
    int index;     /* 排序索引 */
    int tmp[len];  /* 临时数组，用来保存待排序的中间结果 */
    int num[10];   /* 保存索引值的数组 */
    memset(num, 0, 10*sizeof(int));  /* 数组初始清零 */
    memset(tmp, 0, len*sizeof(int)); /* 数组初始清零 */
 
    if (dec < order) /* 最高位排序完成后返回 */
        return;
 
    for (i=0; i<len; i++) {
        index = get_index(array[i], dec, order);  /* 获取索引值 */
        num[index]++;  /* 对应位加一 */
    }
 
    for (i=1; i<10; i++)
        num[i] += num[i-1]; /* 调整索引数组 */
 
    for (i=len-1; i>=0; i--) {
        index = get_index(array[i], dec, order);  /* 从数组尾开始依次获得各个数字的索引 */
        j = --num[index];  /* 根据索引计算该数字在按位排序之后在数组中的位置 */
        tmp[j] = array[i]; /* 数字放入临时数组 */
    }
 
    for (i=0; i<len; i++)
        array[i] = tmp[i];  /* 从临时数组复制到原数组 */
 
    printf("the %d time\n", order);
    for (i=0; i<len; i++)
        printf("%d  ", array[i]);
    printf("\n");
 
    /* 继续按高一位的数字大小进行排序 */
    radix_sort(array, len, dec, order+1);
 
    return;
}
 

