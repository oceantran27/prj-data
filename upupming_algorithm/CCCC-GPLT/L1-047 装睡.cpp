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
  int n, heart, impluse;
  string name;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> name >> heart >> impluse;
    if(heart < 15 || heart > 20 || impluse < 50 || impluse > 70)
      cout << name << endl;
  }
  return 0;
}