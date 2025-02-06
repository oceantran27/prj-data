#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

int Solution::isPalindrome(int A) {
    if(A<0)
        return false;
    long int temp = 0, temp2 = A;
    while(A!=0)
    {
        temp = temp*10 + A%10;
        A/=10;
    }

    if(temp==temp2)
        return true;
    else
        return false;
}
