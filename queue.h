//
// Created by blankness on 18-8-2.
//

#ifndef DATA_STRUCTURE_QUEUE_H
#define DATA_STRUCTURE_QUEUE_H


/*链式队列结点*/
template <typename ElemType>
typedef struct{
    ElemType data;
    struct LinkNode<ElemType> *next;
}LinkNode;
template <typename ElemType>
typedef struct {
    LinkNode<ElemType> *front, *rear;
}LinkQueue;

/**
 * 初始化
 * @param Q
 */
void InitQueue(LinkQueue &Q);

/**
 * 判队空
 * @param Q
 * @return
 */
bool IsEmpty(LinkQueue Q);

template <typename ElemType>
void EnQueue(LinkQueue &Q, ElemType x);

template <typename ElemType>
bool DeQueue(LinkQueue &Q,ElemType &x);
#endif //DATA_STRUCTURE_QUEUE_H
