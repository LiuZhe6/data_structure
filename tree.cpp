//
// Created by blankness on 18-8-2.
//

#include <cstdlib>
#include <cstdio>
#include "tree.h"
#include "queue.h"

void visit(BiTree T) {
    printf("%d\n", T->data);
}

void PreOrder(BiTree T) {
    if (T != NULL) {
        visit(T);                   //访问根结点
        PreOrder(T->lchild);        //递归遍历左子树
        PreOrder(T->rchild);        //递归遍历右子树
    }
}

void InOrder(BiTree T) {
    if (T != NULL) {
        InOrder(T->lchild);         //递归遍历左子树
        visit(T);                   //访问根结点
        InOrder(T->rchild);         //递归遍历右子树
    }
}

void PostOrder(BiTree T) {
    if (T != NULL) {
        PostOrder(T->lchild);       //递归遍历左子树
        PostOrder(T->rchild);       //递归遍历右子树
        visit(T);                   //访问根结点
    }
}

void LevelOrder(BiTree T) {
    LinkQueue Q;
    InitQueue(Q);                   //初始化辅助队列
    BiTree p;
    EnQueue<BiTree>(Q, T);                  //根结点入队
    while (!IsEmpty(Q)) {            //队列不空循环
        DeQueue<BiTree>(Q, p);               //队头元素出队
        visit(p);                   //访问当前p所指向结点
        if (p->lchild != NULL)
            EnQueue<BiTree>(Q, p->lchild);   //左子树不空，则左子树入队列
        if (p->rchild != NULL)
            EnQueue<BiTree>(Q, p->rchild);   //右子树不空，则右子树入队列
    }
}