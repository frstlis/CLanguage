//*************************************************************************
//* File Name: 09mergesort.h
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-15  07-13-11====
//*************************************************************************

#ifndef _09MERGESORT_H
#define _09MERGESORT_H
void merge(int a[], int start, int mid, int end);
void merge_sort_up2down(int a[], int start, int end);
void merge_groups(int a[], int len, int gap);
void merge_sort_down2up(int a[], int len);
#endif
