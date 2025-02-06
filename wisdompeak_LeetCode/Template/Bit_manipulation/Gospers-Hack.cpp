#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Iterate all the m-bit state where there are k 1-bits.

int state = (1 << k) - 1;            
while (state < (1 << m))
{
    doSomething(state);

    int c = state & - state;
    int r = state + c;
    state = (((r ^ state) >> 2) / c) | r;
}
