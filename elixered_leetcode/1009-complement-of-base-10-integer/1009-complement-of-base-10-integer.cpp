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

   int bitwiseComplement(int N) {
    int comp = 1;
    while (comp < N) 
        comp = (comp << 1) | 1;
    return N ^ comp;
}
};