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
    int numDistinctIslands2(vector<vector<int>>& grid) {
        int m = grid.size();
        if (m == 0) {
            return 0;
        }
        
        int n = grid[0].size();
        set<vector<pair<int, int>>> table;
        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, -1, 1};
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    vector<pair<int, int>> path;
                    queue<pair<int, int>> Q;
                    Q.emplace(i, j);
                    grid[i][j] = 0;
                    while (!Q.empty()) {
                        auto p = Q.front();
                        int r = p.first;
                        int c = p.second;
                        path.emplace_back(r, c);
                        Q.pop();
                        for (int k = 0; k < dx.size(); ++k) {
                            int nr = r + dx[k];
                            int nc = c + dy[k];
                            if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 1) {
                                Q.emplace(nr, nc);
                                grid[nr][nc] = 0;                              
                            }
                        }
                    }
                    table.insert(norm(path));
                }
            }
        }
        
        return table.size();
    }
    
private:
    vector<pair<int, int>> norm(vector<pair<int, int>>& path) {
        vector<vector<pair<int, int>>> s(8);
        for (auto& p : path) {
            int x = p.first;
            int y = p.second;
            s[0].emplace_back(x, y);
            s[1].emplace_back(x, -y);
            s[2].emplace_back(-x, y);
            s[3].emplace_back(-x, -y);
            s[4].emplace_back(y, x);
            s[5].emplace_back(y, -x);
            s[6].emplace_back(-y, x);
            s[7].emplace_back(-y, -x);
        }
        
        for (auto& v : s) {
            sort(v.begin(), v.end());
        }
        
        for (auto& v : s) {
            for (int i = 1; i < v.size(); ++i) {
                v[i] = {v[i].first - v[0].first, v[i].second - v[0].second};
            }
            v[0] = {0, 0};
        }
        sort(s.begin(), s.end());
        return s[0];
    }
};
