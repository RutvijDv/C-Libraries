#ifndef DOUBLE_LINKED_LIST_HPP
#define DOUBLE_LINKED_LIST_HPP

#include <bits/stdc++.h>
using namespace std;

// template <typename int>
struct dllNode
{
    int data;
    dllNode *next;

    dllNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// A class to represent a Singly Linked List
// template <typename int>
class DoubleLL
{
private:
    dllNode *head;
    dllNode *tail;
    int length;

public:
    DoubleLL();
    void push_back(int data);
    void push_front(int data);
    void insert(int data, int pos);
    void remove(int pos);
    void print();
    int size();
    int get(int pos);
    void reverse();
    void reverseRecursive();
    void reverseRecursive(dllNode *prev, dllNode *curr);
    void reverseRecursive(dllNode *prev, dllNode *curr, dllNode *next);
};

#endif