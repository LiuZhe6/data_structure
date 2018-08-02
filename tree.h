//
// Created by blankness on 18-8-2.
//

#ifndef DATA_STRUCTURE_TREE_H
#define DATA_STRUCTURE_TREE_H


template <typename ElemType>
typedef struct BiTNode{
    ElemType data;                      //数据域
    struct BiTNode *lchild, *rchild;    //左、右孩子指针
}BiTNode, *BiTree;

/**
 * 访问结点T
 * @param T
 */
void visit(BiTree T);

/**
 * 先序遍历
 * @param T
 */
void PreOrder(BiTree T);

/**
 * 中序遍历
 * @param T
 */
void InOrder(BiTree T);

/**
 * 后序遍历
 * @param T
 */
void PostOrder(BiTree T);

/**
 * 层次遍历
 * @param T
 */
void LevelOrder(BiTree T);

#endif //DATA_STRUCTURE_TREE_H
