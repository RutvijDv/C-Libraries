#ifndef TREE_CPP
#define TREE_CPP

#include "tree.hpp"

// template <typename T>
Tree::Tree()
{
    this->head = NULL;
    this->tail = NULL;
    this->length = 0;
}

// template <typename T>
void Tree::push_back(int data)
{
    treeNode *newNode = new treeNode(data);
    newNode->next = head;
    head = newNode;
    length++;
}

// template <typename T>
int Tree::size()
{
    cout << "This is Tree" << endl;
    return length;
}

// Tree()
// {
//     head = NULL;
//     tail = NULL;
//     size = 0;
// }

// // Inserts a new node at the beginning of the list
// void push_back(T data)
// {
//     Node<T> *newNode = new Node<T>(data);
//     newNode->next = head;
//     head = newNode;
//     size++;
// }

// // Inserts a new node at the end of the list
// void push_front(T data)
// {
//     Node<T> *newNode = new Node<T>(data);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         newNode->next = head;
//         head = newNode;
//     }
//     size++;
// }

// // Inserts a new node after the given node
// void insert_after(Node<T> *prevNode, T data)
// {
//     if (prevNode == NULL)
//     {
//         cout << "The given previous node cannot be NULL" << endl;
//         return;
//     }
//     Node<T> *newNode = new Node<T>(data);
//     newNode->next = prevNode->next;
//     prevNode->next = newNode;
//     size++;
// }

#endif