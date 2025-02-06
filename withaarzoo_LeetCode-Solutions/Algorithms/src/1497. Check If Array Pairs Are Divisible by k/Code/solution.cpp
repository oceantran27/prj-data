#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        // Frequency array to store the count of remainders
        vector<int> remainderFreq(k, 0);

        // Step 1: Calculate the remainder for each element and store the frequency
        for (int num : arr)
        {
            int remainder = ((num % k) + k) % k; // Ensure non-negative remainder
            remainderFreq[remainder]++;
        }

        // Step 2: Check if the pairing condition holds
        for (int i = 0; i <= k / 2; i++)
        {
            if (i == 0)
            {
                // Elements with remainder 0 must pair among themselves
                if (remainderFreq[i] % 2 != 0)
                    return false;
            }
            else
            {
                // Remainder i must pair with remainder k-i
                if (remainderFreq[i] != remainderFreq[k - i])
                    return false;
            }
        }

        return true;
    }
};