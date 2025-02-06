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

#include "ImplementTrie.hpp"

TEST_CASE("Implement Trie") {
    Trie trie;
    SECTION("Sample test") {
        trie.insert("ab");
        REQUIRE_FALSE(trie.search("a"));
        REQUIRE(trie.startsWith("a"));
    }
}
