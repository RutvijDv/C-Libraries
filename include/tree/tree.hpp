#ifndef TREE_HPP
#define TREE_HPP

#include <bits/stdc++.h>
using namespace std;

// template <typename int>
struct treeNode
{
    int data;
    treeNode *next;

    treeNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// A class to represent a Singly Linked List
// template <typename int>
class Tree
{
private:
    treeNode *head;
    treeNode *tail;
    int length;

public:
    Tree();
    void push_back(int data);
    void push_front(int data);
    void insert(int data, int pos);
    void remove(int pos);
    void print();
    int size();
    int get(int pos);
    void reverse();
    void reverseRecursive();
    void reverseRecursive(treeNode *prev, treeNode *curr);
    void reverseRecursive(treeNode *prev, treeNode *curr, treeNode *next);
};

#endif