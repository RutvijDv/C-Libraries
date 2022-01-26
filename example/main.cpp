#include <bits/stdc++.h>
using namespace std;

#include "cpplib.hpp"

int main()
{
    SingleLL sll;
    sll.push_back('a');
    sll.push_back('b');
    sll.push_back('c');

    cout << "Size: " << sll.size() << endl;

    DoubleLL dll;
    dll.push_back('a');

    cout << "Size: " << dll.size() << endl;

    Tree t;
    t.push_back('a');
    t.push_back('a');
    t.push_back('a');
    t.push_back('a');

    cout << "Size: 1233" << t.size() << endl;

    cout << "Hello" << endl;

    return 0;
}
