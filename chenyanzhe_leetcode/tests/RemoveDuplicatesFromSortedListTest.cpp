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

#include "RemoveDuplicatesFromSortedList.hpp"

TEST_CASE("Remove Duplicates from Sorted List") {
    RemoveDuplicatesFromSortedList s;
    ListNode *l1 = nullptr;
    ListNode *l2 = nullptr;
    SECTION("Sample tests") {
        ListNode *item = nullptr;
        // l1 (1 -> 1 -> 2)
        item = new ListNode(2);
        item->next = l1;
        l1 = item;
        item = new ListNode(1);
        item->next = l1;
        l1 = item;
        item = new ListNode(1);
        item->next = l1;
        l1 = item;
        // l2 (1 -> 1 -> 2 -> 3 -> 3)
        item = new ListNode(3);
        item->next = l2;
        l2 = item;
        item = new ListNode(3);
        item->next = l2;
        l2 = item;
        item = new ListNode(2);
        item->next = l2;
        l2 = item;
        item = new ListNode(1);
        item->next = l2;
        l2 = item;
        item = new ListNode(1);
        item->next = l2;
        l2 = item;
        l1 = s.deleteDuplicates(l1);
        item = l1;
        REQUIRE_FALSE(item == nullptr);
        REQUIRE(item->val == 1);
        item = item->next;
        REQUIRE_FALSE(item == nullptr);
        REQUIRE(item->val == 2);
        item = item->next;
        REQUIRE(item == nullptr);
        l2 = s.deleteDuplicates(l2);
        item = l2;
        REQUIRE_FALSE(item == nullptr);
        REQUIRE(item->val == 1);
        item = item->next;
        REQUIRE_FALSE(item == nullptr);
        REQUIRE(item->val == 2);
        item = item->next;
        REQUIRE_FALSE(item == nullptr);
        REQUIRE(item->val == 3);
        item = item->next;
        REQUIRE(item == nullptr);
    }
    list_free(l1);
    list_free(l2);
}
