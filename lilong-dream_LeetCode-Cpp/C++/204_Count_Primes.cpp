#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> vec(n, true);
        
        for(int i = 2; i * i < n; i++) {
            if(!vec[i]) {
                continue;
            }
            for(int k = i; k * i < n; k++) {  //
                vec[k * i] = false;
            }
        }

        int res = 0;
        for(int i = 2; i < n; i++) {
			if(vec[i]) {
				res++;
			}
		}
        
        return res;
    }
};

int main() {
	Solution slt;

	int res = slt.countPrimes(6);

	std::cout << res << std::endl;

	return 0;
}

