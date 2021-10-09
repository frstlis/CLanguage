#include <bits/stdc++.h>
using namespace std;
void quicksort(int *arr, int l, int r);
void quicksort(int *arr, int l, int r){
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

int main(){
    int a[]={12,21,3,5,10,55,2,24,19};
    quicksort(a,0,8);
    for(int m=0;m<9;m++){
        cout<<a[m]<<" ";
    }
    return 0;
}