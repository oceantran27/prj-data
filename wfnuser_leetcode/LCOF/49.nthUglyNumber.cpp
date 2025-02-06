#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        if (n == 1) return 1;

        queue<long> q2;
        queue<long> q3;
        queue<long> q5;

        q2.push(2);
        q3.push(3);
        q5.push(5);
        long target = 0;


        for (int i = 1; i < n; i++) {
            long two = q2.front();
            long thr = q3.front();
            long fiv = q5.front();

            target = min(two, thr);
            target = min(fiv, target);

            if (target == two) {
                q2.pop();
                q2.push(target*2);
                q3.push(target*3);
                q5.push(target*5);
            } else if (target == thr) {
                q3.pop();
                q3.push(target*3);
                q5.push(target*5);
            } else {
                q5.pop();
                q5.push(target*5);
            }
        }

        return target;
    }
    // int nthUglyNumber(int n) {
    //     if (n == 1) return 1;

    //     priority_queue<long, vector<long>, greater<long>> q2;
    //     priority_queue<long, vector<long>, greater<long>> q3;
    //     priority_queue<long, vector<long>, greater<long>> q5;

    //     q2.push(2);
    //     q3.push(3);
    //     q5.push(5);
    //     long target = 0;


    //     for (int i = 1; i < n; i++) {
    //         long two = q2.top();
    //         long thr = q3.top();
    //         long fiv = q5.top();

    //         target = min(two, thr);
    //         target = min(fiv, target);


    //         if (target == two) {
    //             q2.pop();
    //             q2.push(target*2);
    //             q3.push(target*3);
    //             q5.push(target*5);
    //         } else if (target == thr) {
    //             q3.pop();
    //             q3.push(target*3);
    //             q5.push(target*5);
    //         } else {
    //             q5.pop();
    //             q5.push(target*5);
    //         }
    //     }

    //     return target;
    // }
};