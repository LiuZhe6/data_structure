//
// Created by blankness on 18-8-3.
//
#include <malloc.h>
#include "queue.h"
void InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (LinkNode *) malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

bool IsEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}
template <typename ElemType>
void EnQueue(LinkQueue &Q, ElemType x) {
    LinkNode *s = (LinkNode *) malloc(sizeof(LinkNode));
    s->data = x;
    s->next = NULL;           //创建新结点，插入到链尾
    Q.rear->next = s;
    Q.rear = s;
}
template <typename ElemType>
bool DeQueue(LinkQueue &Q, ElemType &x) {
    if (Q.front == Q.rear)
        return false;
    LinkNode *p = Q.front->next;          //含头结点
    x = p->data;
    Q.front->next = p->next;
    if (Q.rear == p)
        Q.rear = Q.front;                 //若原队列中只有一个结点，删除后变空
    free(p);
    return true;

}