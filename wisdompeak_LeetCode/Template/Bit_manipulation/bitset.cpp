#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

bitset<100>bs; // define a bitset type variable

std::string str = std::bitset<32>(n).to_string(); // convert an integer n to bitset type, and then to string type

bs.set(); // make every bit as 1

bs.count(); // count the number of 1-bits in bs
