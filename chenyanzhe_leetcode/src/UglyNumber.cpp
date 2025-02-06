#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "UglyNumber.hpp"

bool UglyNumber::isUgly(int num) {
    if (num <= 0)
        return false;

    while (true) {
        if (num == 1)
            break;
        else if (num % 2 == 0)
            num /= 2;
        else if (num % 3 == 0)
            num /= 3;
        else if (num % 5 == 0)
            num /= 5;
        else
            break;
    }

    return num == 1;
}
