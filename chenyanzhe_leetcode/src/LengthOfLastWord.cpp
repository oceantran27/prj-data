#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "LengthOfLastWord.hpp"

int LengthOfLastWord::lengthOfLastWord(string s) {
    int len = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ')
            len++;
        else if (i + 1 < s.size() && s[i + 1] != ' ')
            len = 0;
    }

    return len;
}
