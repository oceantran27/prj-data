#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Below is the interface for Iterator, which is already defined for you.
// **DO NOT** modify the interface for Iterator.
class Iterator {
    struct Data;
    Data* data;

public:
    Iterator(const vector<int>& nums);
    Iterator(const Iterator& iter);
    virtual ~Iterator();
    // Returns the next element in the iteration.
    int next();
    // Returns true if the iteration has more elements.
    bool hasNext() const;
};

class PeekingIterator : public Iterator {
public:
    int m_next;
    bool m_hasNext;
    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        // Initialize any member here.
        // **DO NOT** save a copy of nums and manipulate it directly.
        // You should only use the Iterator interface methods.
        m_hasNext = Iterator::hasNext();
        if (m_hasNext) {
            m_next = Iterator::next();
        }
    }

    // Returns the next element in the iteration without advancing the iterator.
    int peek() { return m_next; }

    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    int next() {
        int res = m_next;
        m_hasNext = Iterator::hasNext();
        if (m_hasNext) {
            m_next = Iterator::next();
        }
        return res;
    }

    bool hasNext() const { return m_hasNext; }
};
