#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Solve a given equation and return the value of x in the form of string
// "x=#value". The equation contains only '+', '-' operation, the variable x and
// its coefficient.
//
// If there is no solution for the equation, return "No solution".
//
// If there are infinite solutions for the equation, return "Infinite
// solutions".
//
// If there is exactly one solution for the equation, we ensure that the value
// of x is an integer.
//
// Example 1:
// Input: "x+5-3+x=6+x-2"
// Output: "x=2"
// Example 2:
// Input: "x=x"
// Output: "Infinite solutions"
// Example 3:
// Input: "2x=x"
// Output: "x=0"
// Example 4:
// Input: "2x+3x-6x=x+2"
// Output: "x=-1"
// Example 5:
// Input: "x=x+2"
// Output: "No solution"

class Solution {
public:
    string solveEquation(string equation) {
        int sign = 1;
        int coeff = 0;
        int sum = 0;
        int i = 0, j = 0;

        for (; j < equation.size(); ++j) {
            if (equation[j] == 'x') {
                if (i == j || equation[j - 1] == '+') {
                    coeff += sign;
                } else if (i == j || equation[j - 1] == '-') {
                    coeff -= sign;
                } else {
                    coeff += sign * stoi(equation.substr(i, j - i));
                }
                i = j + 1;
            } else if (equation[j] == '=') {
                if (j > i) {
                    sum += sign * stoi(equation.substr(i, j - i));
                }
                sign = -1;
                i = j + 1;
            } else if (equation[j] == '+' || equation[j] == '-') {
                if (i == j || equation[j - 1] == 'x') {
                    continue;
                }
                sum += sign * stoi(equation.substr(i, j - i));
                i = j;
            }
        }

        if (i < equation.size()) {
            sum += sign * stoi(equation.substr(i, j - i));
        }

        if (coeff == 0 && sum == 0) {
            return "Infinite solutions";
        } else if (coeff == 0 && sum != 0) {
            return "No solution";
        }

        return "x=" + to_string(-sum / coeff);
    }
};
