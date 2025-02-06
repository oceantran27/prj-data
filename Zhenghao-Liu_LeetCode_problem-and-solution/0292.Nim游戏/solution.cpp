#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
* 1、2、3的情况我必赢,4的情况我必输
* 5的话我先出1,就能变成对面是4且对面先出的情况，也就是他必输，也就是我必赢
* 6的话我先出2,就能变成对面是4且对面先出的情况，也就是他必输，也就是我必赢
* 7的话我先出3,就能变成对面是4且对面先出的情况，也就是他必输，也就是我必赢
* 8的话我无论是出1 2 3，对面都能对应出3 2 1，来达到是4且我先出的情况，就是我必输
* 9的话我先出1，就能变成对面是8且对面先出的情况，也就是他必输，也就是我必赢
* 以此类推10赢，11赢，12输，13赢
* 结论：通过拿1个/2个/3个，来达到到我最近的一个输的情况，那就是是对面先开始，且对面必输，换而言之，我必赢
* 综上：4的倍数我必输
*/
class Solution {
public:
    bool canWinNim(int n) {
        return n%4!=0;
    }
};
