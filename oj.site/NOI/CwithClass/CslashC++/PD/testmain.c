//*************************************************************************
//* File Name: testmain.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-12  17-53-28====
//*************************************************************************

#include "stdio.h"
#include "04_bubblesort.h"
#include "05selectsort.h"
#include "06initarray.h"
#include "07insertsort.h"
#include "08shellsort.h"
#include "09mergesort.h"
#include "10quicksort.h"
#include "11heapsort.h"
#include "12countsort.h"
#include "13countsort.h"
#include "14bucketsort.h"
#include "15redixsort.h"


int main(int argc, int argv[]){
    
    int a[100];
    int n;
    printf("Please init array(The deal must less 100): \n");
    scanf("%d",&n);
    printf("Please Input elements of the array: \n");
    initarrayn(a, n);

    printf("The init array is : \n");
    for(int i=0;i<n;i++)
    	printf("%d ",a[i]);
    printf("\n");
    printf("The Bubble sort is: \n");

    bubblesorta(a, n);
    for(int i=0;i<n ;i++)
    	printf("%d ",a[i]);
    printf("\n");
    printf("The Select sort is: \n");

    selectsorta(a,n);
    for(int i=0;i<n ;i++)
    	printf("%d ",a[i]);
    printf("\n");

    printf("The Bubble sort is: \n");

    bubblesortd(a, n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("The Select sort is: \n");

    selectsortd(a,n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("The Insert sort is: \n");
    insertsorta(a,n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("The Insert sort is: \n");
    insertsortd(a,n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("The Shell sort is: \n");
    shellsorta(a,n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("The Shell sort is: \n");
    shellsortd(a,n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("The Merge sort is: \n");
    //merge_sort_up2down(a, 0, n);
    merge_sort_down2up(a,n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("The Merge sort is: \n");
    merge_sort_up2down(a, 0, n-1);
    //merge_sort_down2up(a,n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("The Quick sort is: \n");
    //merge_sort_up2down(a, 0, n);
    quicksort(a,0,n-1);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("The Heap sort(ASC): \n");
    heap_sort_asc(a, n);            // 升序排列
    //heap_sort_desc(a, n);        // 降序排列

    
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");


    printf("The Heap sort(DESC): \n");
    //heap_sort_asc(a, n);            // 升序排列
    heap_sort_desc(a, n);        // 降序排列
   
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");


    printf("The Count sort: \n");
    countsort(a, n);           
       
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("The Countbucket sort is: \n");
    
    bucketsort(a,0,n);
    for(int i=0;i<n ;i++)
        printf("%d ",a[i]);
    printf("\n");


    
    printf("Please Input the width of bucket: ");
    int bucket_s;
    scanf("%d",&bucket_s);
    bucket_sort(a,n,bucket_s);
    
    printf("The Redix sort is: \n");
    
    RadixSort(a,10);
    Show(a,n);




    printf("\n");

    return 0;
}
