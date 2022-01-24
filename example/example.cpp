#include <bits/stdc++.h>
using namespace std;

#include "singleLL.hpp"
#include "doubleLL.hpp"
#include "tree.hpp"

int main()
{
    SingleLL sll;
    sll.push_back('a');
    sll.push_back('b');
    sll.push_back('c');

    cout << "Size: " << sll.size() << endl;

    DoubleLL dll;
    dll.push_back('a');
    dll.push_back('b');
    dll.push_back('c');

    cout << "Size: " << dll.size() << endl;

    Tree t;
    t.push_back('a');
    t.push_back('b');
    t.push_back('c');

    cout << "Size: " << t.size() << endl;

    cout << "Hello" << endl;

    return 0;
}

// g++ .\example\example.cpp .\src\linked-list\singleLL.cpp -I .\include\linked-list\ -o pg3.exe