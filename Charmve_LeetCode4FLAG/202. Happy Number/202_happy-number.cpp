#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


int isInSeq(int n)
{
    int a = 0; 
    int sum = 0;
    while(n)
    {
        a = n%10;
        sum += a*a;
        n = n/10;
    }
    return sum;
}

int isHappy(int n){
    int slow = n;
    int fast = n;

    do{
        slow = isInSeq(slow);
        fast = isInSeq(fast);
        fast = isInSeq(fast);
    }while(slow!=fast);

    return slow == 1;
}
