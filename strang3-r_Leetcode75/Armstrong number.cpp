#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {

    int num, originalNum, remainder, result = 0;

    cout << "Enter a three-digit integer: ";

    cin >> num;

    originalNum = num;

    while (originalNum != 0) {



        remainder = originalNum % 10;

        

        result += remainder * remainder * remainder;

        



        originalNum /= 10;

    }

    if (result == num)

        cout << num << " is an Armstrong number.";

    else

        cout << num << " is not an Armstrong number.";

    return 0;

}