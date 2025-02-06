#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// ABֱֲ + 12 - 12 + 7 - 7 + 5 - 5
// AɴβB 2ABҪ任̣еĲоһ·ҲٵĲ 
// ˼·ʹ

//////////////////////////////////////////////////////////////////////////
//  target Ϊ A  B Ĳֵ
// vector<int> ΪֲĲ[0] = 12[1] = 7[2] = 5
//  {0,1,-1} ʾ1  +7  1  -5
// ص int Ϊٲ
class Solution {
public:
    int minMove(int target, vector<int>& ops) {
        initData();

        int ans = INT_MIN;
        int cnt = 0;
        if (target > data.size()) {
            cnt = (target - data.size()) / 12 + 1;
        }
        for (int i = 0; i < 5 * 7; i++) {
            int temp = target - (cnt + i) * 12;
            if (temp < 0 || temp >= data.size()) continue;
            int tempCnt = cnt + i + getTimes(data[temp]);
            if (ans < tempCnt) {
                ans = tempCnt;
                ops = data[temp];
            }
        }

        return ans;
    }

    void initData() {
        queue<pair<int, vector<int>>> que;
        que.push({ op[0], {1,0,0} });
        que.push({ op[1], {0,1,0} });
        que.push({ op[2], {0,0,1} });

        while (!que.empty()) {
            for (int len = que.size() - 1; len >= 0; len--) {
                auto [t, v] = que.front();
                que.pop();

                if (t >= data.size() || t < 0 || !data[t].empty()) continue;
                data[t] = v;

                for (int k = -1; k <= 1; k += 2) {
                    for (int i = 0; i < op.size(); i++) {
                        int temp = t + k * op[i];
                        if (temp >= data.size() || temp < 0 || !data[temp].empty()) continue;
                        v[i] += k;
                        que.push({ temp, v });
                        v[i] -= k;
                    }
                }
            }
        }

        //printVectorVectorT(data);
    }

    int getTimes(vector<int>& ops) {
        return abs(ops[0]) + abs(ops[1]) + abs(ops[2]);
    }

private:
    vector<int> op = { 12,7,5 };

    vector<vector<int>> data = vector<vector<int>>(5 * 7 * 12, vector<int>());
};

//////////////////////////////////////////////////////////////////////////
int _solution_run(int target)
{
    //int caseNo = -1;
    //static int caseCnt = 0;
    //if (caseNo != -1 && caseCnt++ != caseNo) return {};
    cout << "target = " << target << endl;
    vector<int> ops = vector<int>(3, 0);
    Solution sln;
    int ans = sln.minMove(target, ops);
    cout << "explain: ";
    //cout << "\t" << ops[0] << "  12\t" << ops[1] << "  7 \t" << ops[2] << "  5" << endl;
    printVectorT(ops);
    cout << endl;

    return ans;
}

