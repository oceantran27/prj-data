#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
1. 按照+-*顺序来写就可以，别被评论那个人坑了
2. 注意乘法，所以要两个变量，一个val，一个past_val
3. 注意是不能有“001”“00”“09”这种前面有0的情况的，所以在循环一次+-*后，判断一下当前数字是否是0
4. C++中str+=new_str快且节省于str=str+new_str
5. 节省内存可以一直用一个str回溯，加上一个resize恢复原样即可，更强的就是中间插一位，其余向后移，只变那一位当符号即可
6. 别想着先求出所有组合最后再calculate，肯定超时
*/
class Solution {
public:
    vector<string> addOperators(string num, int target) {
        int num_size=num.size();
        if (num_size==0)
            return {};
        vector<string> answer;
        string num_now="";
        helper(answer,num,num_size,target,num_now,0,0,0);
        return answer;
    }
    void helper(vector<string>& answer,string & num,int & num_size,int &target,string & num_now,int index,long val,long past_val)
    {
        //index在第几个数，表明从第几个数前面加'+''-''*'
        if (index==num_size)
        {
            if (val==target)
                answer.push_back(num_now);
            return;
        }
        int num_now_size=num_now.size();
        for (int i=index;i<num_size;++i)
        {
            string current_value_str=num.substr(index,i-index+1);
            long current_value_long=stol(current_value_str);
            //当为第一个数时，只有'+'的情况
            if (index==0)
            {
                num_now+=current_value_str;
                helper(answer,num,num_size,target,num_now,i+1,current_value_long,current_value_long);
                //因为string递归内存还是挺大的，采用引用节省内存，再resize恢复原样
                num_now.resize(num_now_size);
            }
            else
            {
                //'+'
                num_now+='+'+current_value_str;
                helper(answer,num,num_size,target,num_now,i+1,val+current_value_long,current_value_long);
                num_now.resize(num_now_size);
                //'-'
                num_now+='-'+current_value_str;
                helper(answer,num,num_size,target,num_now,i+1,val-current_value_long,-current_value_long);
                num_now.resize(num_now_size);
                //'*'
                num_now+='*'+current_value_str;
                helper(answer,num,num_size,target,num_now,i+1,val-past_val+past_val*current_value_long,past_val*current_value_long);
                num_now.resize(num_now_size);
            }
            //注意数字不是能有"001"、"00"、"09"出现的
            if (current_value_long==0)
                return;
        }
    }
};
