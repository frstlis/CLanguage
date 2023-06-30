//*************************************************************************
//* File Name: 12countsort.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-16  06-40-46====
//*************************************************************************


#include <string.h>
#define N 65535 //N值应根据题目具体要求设置
 
void countsort(int *a, int n) {
	int counter[N];
	memset(counter, 0, sizeof(counter));
	for(int i = 0; i < n; ++i) {
		counter[a[i]]++;
	}
	int j = 0;
	for(int i = 0; i < N; ++i) {
		if(1 == counter[i]) {
			a[j++] = i;
		}
		if(counter[i] > 1) {
			int len = j;
			for(; j < len + counter[i]; ++j) {
				a[j] = i;
			}
		}
	}
	// for(int i = 0; i < n; ++i) {
	// 	printf("%5d", a[i]);
	// }
 
	// //int new_length = 0;
	// //for(int i = 0; i < N; ++i) {
	// //	if(counter[i] >= 1) {
	// //		a[j++] = i;
	// //		new_length++;
	// //	}
	// //}
	// //for(int i = 0; i < new_length; ++i) {
	// //	printf("%5d", a[i]);
	// //}
	// printf("\n");
}
 
