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
    int reverse(int x) {
        int result = 0;
        while(x){
            int temp = result * 10 + x % 10;
            //出现溢出
            if(temp / 10 != result)
                return 0;
            result = temp;
            x /= 10;
        }
        return result;
    }
};