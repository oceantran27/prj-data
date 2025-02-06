#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "MovingAverageFromDataStream.hpp"

MovingAverage::MovingAverage(int size) : total(0), size(size) {

}

double MovingAverage::next(int val) {
    if (data.size() == size) {
        total -= data.front();
        data.pop_front();
    }
    total += val;
    data.push_back(val);
    return (double) total / data.size();
}
