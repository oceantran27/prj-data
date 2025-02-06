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
    vector<int> getRow(int rowIndex) {
        
        vector<int> row(rowIndex + 1, 0);

        for (auto i = 0; i < rowIndex + 1; ++i)
        {
            for (auto j = i; j >= 0; --j)
            {
                if (j == 0 || j == i)
                {
                    row[j] = 1;
                }
                else
                {
                    row[j] = row[j] + row[j - 1];
                }
            }
        }

        return row;
    }
};
