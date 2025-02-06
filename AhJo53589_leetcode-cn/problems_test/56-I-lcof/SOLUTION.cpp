#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


//////////////////////////////////////////////////////////////////////////
class Solution {
public:
    //: [1,2,1,3,2,5]
    //: [3,5]
    vector<int> singleNumbers(vector<int>& nums) {
        int s = 0;
        for (int num : nums) {
            s ^= num;
        }
        //sֻһε2ֵ^ a,b
        //Ȼa,b һôs϶0ôsĶƿ϶1λnλ1ֻ0^1ŵ1
        //a,b ڵnλҪôa0b1 Ҫôb0a1    ---->A
        //s = 3 ^ 5; 0011 ^ 0101 = 0110 = 6
        //int8λ
        //-6  ԭ1000 0110
        //    1111 1001
        //    1111 1010
        //s & (-s) 
        //  0000 0110
        //& 1111 1010
        //  0000 0010
        //k = s & (-s) Ǳsһ1ҽλΪ0  Ҳsһ1ǵڶλ   --->B
        //s & (-s)ܷҵһ1 ˣʵҵκһ1
        //AB  ǿȷ 3  5 ضԷֵ ͬ
        //ͬ 11 ڶȫͬбضֵͬ
        int k = s & (-s);
        //1  0001  һ
        //2  0010  ڶ
        //1  0001  һ
        //3  0011  ڶ
        //2  0010  ڶ
        //5  0101  һ
        //һ 1 1 5  ڶ 2 3 2 Ǿͽ2ֻһ ֵ2
        vector<int> rs(2, 0);
        for (int num : nums) {
            if (num & k) {
                //ڶ
                rs[0] ^= num;
            }
            else {
                //һ
                rs[1] ^= num;
            }
        }
        return rs;
    }
};

//////////////////////////////////////////////////////////////////////////
vector<int> _solution_run(vector<int>& nums)
{
    //int caseNo = -1;
    //static int caseCnt = 0;
    //if (caseNo != -1 && caseCnt++ != caseNo) return {};

    Solution sln;
    return sln.singleNumbers(nums);
}

//#define USE_SOLUTION_CUSTOM
//string _solution_custom(TestCases &tc)
//{
//    return {};
//}

//////////////////////////////////////////////////////////////////////////
//#define USE_GET_TEST_CASES_IN_CPP
//vector<string> _get_test_cases_string()
//{
//    return {};
//}
