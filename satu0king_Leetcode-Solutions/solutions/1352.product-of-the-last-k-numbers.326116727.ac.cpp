#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class ProductOfNumbers {
  vector<int> prefixProduct;

public:
  ProductOfNumbers() : prefixProduct(1, 1) {}

  void add(int num) {
    if (num == 0)
      prefixProduct.assign(1, 1);
    else
      prefixProduct.push_back(prefixProduct.back() * num);
  }

  int getProduct(int k) {
    if (k >= prefixProduct.size())
      return 0;
    return prefixProduct.back() / prefixProduct[prefixProduct.size() - k - 1];
  }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
