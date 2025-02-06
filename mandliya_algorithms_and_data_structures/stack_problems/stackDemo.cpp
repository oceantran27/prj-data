#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <iostream>
#include <stack.h>

int main()
{
    algo::Stack<double> st{10};
    for ( int i = 0; i < 10; ++i) {
        st.push( i );
    }
    st.print();
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }
    while (st.size() > 0) {
        std::cout << st.top() << " ";
        st.pop();
    }

    std::cout << std::endl;
    return 0;
}
