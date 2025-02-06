#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "catch.hpp"

#include "LowestCommonAncestorOfABinarySearchTree.hpp"

TEST_CASE("Lowest Common Ancestor of a Binary Search Tree") {
    LowestCommonAncestorOfABinarySearchTree s;
    TreeNode *root = nullptr;
    SECTION("Sample test") {
        TreeNode *_3 = new TreeNode(3);
        TreeNode *_2 = new TreeNode(2, nullptr, _3);
        root = _2;
        REQUIRE(s.lowestCommonAncestor(root, _2, _3) == _2);
    }
}
