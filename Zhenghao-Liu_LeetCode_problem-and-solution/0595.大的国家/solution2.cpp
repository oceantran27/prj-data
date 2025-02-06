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
SELECT name,population,area
FROM World
WHERE area>=3000000
UNION
SELECT name,population,area
FROM World
WHERE population>=25000000;
