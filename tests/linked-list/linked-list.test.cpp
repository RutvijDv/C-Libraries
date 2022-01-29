#include <bits/stdc++.h>
using namespace std;

#define CONFIG_CATCH_MAIN

// #define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <catch.hpp>
#include "cpplib.hpp"

TEST_CASE("Constructing Linked Lists and trees 1", "[constructors]")
{
    SECTION("Linked List construction 1")
    {
        SingleLL sll;
        sll.push_back('a');
        sll.push_back('b');
        sll.push_back('c');

        REQUIRE(sll.size() == 3);
    }
    SECTION("Tree Construction 1")
    {
        Tree t;
        t.push_back('a');
        t.push_back('a');
        t.push_back('a');
        t.push_back('a');

        REQUIRE(t.size() == 4);
    }
}