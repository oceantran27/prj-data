#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

// function to calculate factorial
int factorial(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
            fact = fact * i;
    
    return fact;
}

int Strongnum(int num){
    
    int digit, sum = 0;
    int temp = num;
    
    // calculate 1! + 4! + 5!
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + factorial(digit);
        temp /= 10;
    }
    
    
    return sum == num;
    
}
int main ()
{
    int num = 120;
    
    if(Strongnum(num))
        cout << num << " is Strong Number";
    else
        cout << num << " is Not Strong Number";

}
