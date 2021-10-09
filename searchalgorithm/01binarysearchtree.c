//*************************************************************************
//* File Name: 01binarysearchtree.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2018-12-18  06-59-14====
//*************************************************************************



typedef int Type;
typedef struct BSTreeNode{
    Type key;
    struct BSTreeNode *left;
    struct BSTreeNode *right;
    struct BSTreeNode *parent;
}Node,*BSTree;


