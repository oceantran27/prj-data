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
    int votea, voteb, adj1, adj2, adj3, suma; 
    cin >> votea >> voteb >> adj1 >> adj2 >> adj3;
    suma=  3 - (adj1 + adj2 + adj3);
    if(suma == 3 || (suma >= 1 && votea > voteb))
      printf("The winner is a: %d + %d", votea, suma);
    else
      printf("The winner is b: %d + %d", voteb, 3-suma);
    return 0;
}
