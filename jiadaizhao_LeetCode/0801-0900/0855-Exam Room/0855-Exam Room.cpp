#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class ExamRoom {
public:
    ExamRoom(int N) {
        this->N = N;
    }
    
    int seat() {
        int res = 0;
        if (seats.size()) {
            int maxGap = *seats.begin();
            int prev = *seats.begin();
            for (int curr : seats) {
                int gap = (curr - prev) / 2;
                if (gap > maxGap) {
                    maxGap = gap;
                    res = prev + gap;
                }
                prev = curr;
            }
            
            if (N - 1 - *seats.rbegin() > maxGap) {
                res = N - 1;
            }
        }
        seats.insert(res);
        return res;
    }
    
    void leave(int p) {
        seats.erase(p);
    }
    
private:
    int N;
    set<int> seats;
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(N);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */

class ExamRoom {
public:
    ExamRoom(int N) {
        this->N = N;
    }
    
    int seat() {
        int res = 0;
        if (seats.size()) {
            int first = *seats.begin(), last = *seats.rbegin();
            int maxGap = gapTable.empty() ? -1 : gapTable.rbegin()->first;

            if (maxGap == -1 || first >= maxGap / 2 || N - 1 - last > maxGap / 2) {
                if (first >= N - 1 - last) {
                    res = 0;
                    addGap(first, 0);
                }
                else {
                    res = N - 1;
                    addGap(N - 1 - last, last);
                }
            }
            else {
                auto& s = gapTable[maxGap];
                int index = *s.begin();
                int next = *seats.upper_bound(index);
                res = (index + next) / 2;
                removeGap(maxGap, index);
                addGap(res - index, index);
                addGap(next - res, res);            
            }
        }
        seats.insert(res);
        return res;        
    }
    
    void leave(int p) {
        auto curr = seats.lower_bound(p);
        auto prev = curr, next = curr;
        ++next;
        --prev;
        if (next != seats.end()) {
            removeGap(*next - p, *curr);
        }
        if (prev != seats.end()) {
            removeGap(p - *prev, *prev);
            if (next != seats.end()) {
                addGap(*next - *prev, *prev);
            }
        }
        seats.erase(p);
    }
    
private:
    int N;
    map<int, set<int>> gapTable;
    set<int> seats;
    void addGap(int len, int index) {
        // gap with odd length is equivalent to even length when divided by 2
        len -= len & 1;
        gapTable[len].insert(index);
    }
    void removeGap(int len, int index) {
        len -= len & 1;
        gapTable[len].erase(index);
        if (gapTable[len].empty()) {
            gapTable.erase(len);
        }
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom obj = new ExamRoom(N);
 * int param_1 = obj.seat();
 * obj.leave(p);
 */
