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
    int sizeArr;
    cin >> sizeArr;

    int digi, num;
    while(sizeArr--){
        scanf("%d", &num);
        digi = 0;
        while(num>0){
            if(num%10==4){
                digi++;
            }
            num /= 10;
        }
        cout << digi << endl;
    }
}
