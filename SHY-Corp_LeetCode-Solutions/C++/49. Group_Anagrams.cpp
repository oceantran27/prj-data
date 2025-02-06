#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
File     : Group_Anagrams.cpp
The solution involves 2 steps:

Sort the element and make it as the key.
Take the value and place it in the key.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<string> > groupAnagrams(vector<string>& input_set) 
{
    // the first value will hold the key, the second vector is used to hold the multiple values.
	unordered_map<string, vector<string> > my_map;
	vector<vector<string> > final_set;

	for (int i = 0; i < input_set.size(); i++)
	{
        // take value at the index as a key
		string key = input_set[i];

        //sort the key
		sort(key.begin(), key.end());

        // add the value to that key
		my_map[key].push_back(input_set[i]);

	}

	for (auto n : my_map)
	{
        // add all the values in the map to the final set
		final_set.push_back(n.second);
	}

	return final_set;
}

int main()
{
    vector<string> input_set;
    input_set.push_back("eat");
    input_set.push_back("tea");
    input_set.push_back("tan");
    input_set.push_back("ate");
    input_set.push_back("nat");
    input_set.push_back("bat");
    
    vector<vector<string> > final_set =  groupAnagrams(input_set);

    // print the output
    for (int i = 0; i < final_set.size(); i++)
    {
        if (final_set[i].size() > 0)
        {
            cout << " ( ";
            for (int j = 0; j < final_set[i].size(); j++)
                cout << final_set[i][j] << " ";
            cout << ")";
        }
        cout<<endl;
    }

	return 0;
}
