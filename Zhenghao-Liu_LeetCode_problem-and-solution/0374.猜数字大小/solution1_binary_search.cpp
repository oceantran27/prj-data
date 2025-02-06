#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left=1,right=n;
        while (left<=right)
        {
            int mid=left+((right-left)>>1);
            int result=guess(mid);
            if (result==0)
                return mid;
            else if (result<0)
                right=mid-1;
            else
                left=mid+1;
        }
        return left;
    }
};
