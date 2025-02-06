#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

# Write your MySQL query statement below
SELECT * FROM cinema 
WHERE ((description != 'boring') AND (id%2 != 0))
ORDER BY rating DESC;
