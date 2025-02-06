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

#include "WordLadder.hpp"

TEST_CASE("Word Ladder") {
    WordLadder s;
    SECTION("Sample test") {
        string beginWord = "hit";
        string endWord = "cog";
        unordered_set<string> wordList = {"hot", "dot", "dog", "lot", "log"};
        // transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog"
        REQUIRE(s.ladderLength(beginWord, endWord, wordList) == 5);
    }
}
