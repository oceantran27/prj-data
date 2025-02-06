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

#include "InsertionSortList.hpp"

TEST_CASE("Insertion Sort List") {
    InsertionSortList s;
    ListNode *head = nullptr;
    SECTION("Sample test") {
        ListNode *_1 = new ListNode(1);
        _1->next = head;
        head = _1;
        ListNode *_3 = new ListNode(3);
        _3->next = head;
        head = _3;
        ListNode *_2 = new ListNode(2);
        _2->next = head;
        head = _2;
        ListNode *_4 = new ListNode(4);
        _4->next = head;
        head = _4;
        head = s.insertionSortList(head);
        ListNode *n = head;
        REQUIRE_FALSE(n == nullptr);
        REQUIRE(n->val == 1);
        n = n->next;
        REQUIRE_FALSE(n == nullptr);
        REQUIRE(n->val == 2);
        n = n->next;
        REQUIRE_FALSE(n == nullptr);
        REQUIRE(n->val == 3);
        n = n->next;
        REQUIRE_FALSE(n == nullptr);
        REQUIRE(n->val == 4);
        n = n->next;
        REQUIRE(n == nullptr);
    }
    list_free(head);
}
