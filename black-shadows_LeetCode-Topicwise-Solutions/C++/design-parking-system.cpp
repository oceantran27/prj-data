#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small)
     : space_{0, big, medium, small} {
    }
    
    bool addCar(int carType) {
        if (space_[carType] > 0) {
            --space_[carType];
            return true;
        }
        return false;
    }

private:
    vector<int> space_;
};
