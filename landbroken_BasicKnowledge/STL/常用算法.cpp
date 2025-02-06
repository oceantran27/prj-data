#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include"stdafx.h"

/*C++㷨STL㷨򡢺ϲͷ*/
/*
1C++ sortSTL sort㷨

2C++ stable_sort(STL stable_sort)㷨

3C++ partial_sort(STL partial_sort)㷨
һ 100 ֵֻС 100 ȤԶȫȻѡǰ 100 Ԫأеʱ䡣ʱҪʹòֻҪЩеǰ100õġ

4C++ nth_element(STL nth_element)㷨
nth_element() 㷨 partial_sort() ͬӦõķΧĵһ͵ָڶһָ n ԪصĵΧڵԪȫģnth_dement() ִлᵼµ n ԪرʵλáΧڣڵ n Ԫ֮ǰԪضСڵ n ԪأÿԪض㷨Ĭ < 

5C++ is_sorted(STL is_sorted)㷨
*/

/*
6C++ mergeinplace_mergeSTL mergeinplace_merge㷨

std::vector<int> these {2, 15, 4, 11, 6r 7};//1st input to merge
std::vector<int> those {5, 2, 3, 2, 14, 11, 6}; // 2nd input to merge
std::stable_sort(std:rbegin(these), std::end(these),std::greatero ());// Sort 1st range in descending sequence
std::stable_sort(std::begin(those), std::end(those), std::greater<>()); // Sort 2nd range
std::vector<int> result(these.size() + those.size() + 10);//Plenty of room for results
auto end_iter = std::merge(std::begin(these), std::end(these),std::begin(those), std::end(those),std::begin (result), std::greater<>());// Merge 1st range and 2nd range into result
std:: copy (std::begin (result), end_iter, std::ostream_iterator<int>{std::cout, " "});
*/

/*
7C++ findSTL find㷨

8C++ find_ifSTL find_if㷨

int value {5};
auto iter1 = std::find_if(std::begin(numbers), std::end(numbers),[value](int n) { return n > value; });
if(iter1 != std::end(numbers))
std::cout << *iter1 << " was found greater than " << value << ".\n";

9C++ find_if_notSTL find_if_not㷨

10C++ find_first_of(STL find_first_of)㷨

11C++ adjacent_find(STL adjacent_find)㷨ʹ
adjacent_find() 㷨ȵԪء == ȽһԪأصĵָǰԪеĵһûһȵԪأ㷨еĽ

12C++ find_end(STL find_end)

13C++ search(STL search)
ڲез棬search() 㷨 find_end() 㷨ƣҵǵһƥһ

14C++ search_nSTL search_n㷨
*/

/*
15C++ partition(STL partition)㷨
зԪػ¶ԪؽУʹνʷ true Ԫػᱻʹνʷ false Ԫصǰ档 partition() 㷨¡

partition ǰǶ屻зΧһνʡչʾʹ partition() еֵСƽֵԪػᱻдƽֵԪصĺ棺

std::vector<double> temperatures {65, 75, 56, 48, 31, 28, 32, 29, 40, 41, 44, 50};
std::copy(std::begin(temperatures), std::end(temperatures), //List the values
std::ostream_iterator<double>{std::cout, " "});
std::cout << std::endl;
auto average = std::accumulate(std::begin(temperatures),std::end(temperatures), 0.0)/temperatures.size();
std::cout << "Average temperature: "<< average << std::endl;
std::partition(std::begin(temperatures), std::end(temperatures),[average](double t) { return t < average; });
std::copy(std::begin(temperatures), std::end(temperatures),std::ostream_iterator<doiible>{std::cout, " "});
std::cout << std::endl;

δЩݣ
65 75 56 48 31 28 32 29 40 41 44 50
Average temperature: 44.9167
44 41 40 29 31 28 32 48 56 75 65 50

16C++ partition_copy(STL partition_copy)

17C++ partition_point(STL partition_point)㷨
*/

/*
18C++ binary_search(STL binary_search)ֲ
19C++ lower_bound(STL lower_bound)ֲ
20C++ upper_bound(STL upper_bound)ֲ
21C++ equel_range(STL equal_range)ֲ
22C++(STL) all_ofany_ofnone_of
*/

/*
23C++ equal(STL equal)Ƚ㷨
24C++ mismatch(STL mismatch)
*/

/*
25C++STL lexicographical_compareַ㷨

ַĸͨӵһַʼȽ϶ӦַõġһԲͬĶӦַĸַλַ˳ǲַͬ˳ַĳͬеַȣôЩַȡַĳȲַַͬкͳַĳʼͬģôַСڳַ age ڡbeauty ֮ǰa lull  a storm ֮ǰȻthe chicken  the egg λ

κ͵Ķ˵ֵĸ˼ķеĵһԪؿʼαȽ϶ӦԪأǰĲͬе˳ȻеĶǿɱȽϵġ

lexicographical_compare()㷨ԱȽɿʼͽСǰ˵һУ 3 ͵ 4 ֱǵڶеĿʼͽĬ < ȽԪأҪʱҲṩһʵСڱȽϵĺΪѡĵ 5 һеֵСڵڶ㷨᷵ true򷵻 falseԣ false һдڻڵڶС

ԪرȽϵġһԲͬĶӦԪؾе˳еĳȲͬҶкͳеĳʼԪƥ䣬ôСڳСͬҶӦԪضȵȵġСڷǿСһʹ lexicographical_compare() ʾ
std::vector<string> phrase1 {"the", "tigers", "of", "wrath"};
std::vector<string> phrase2 {"the", "horses", "of", "instruction"};
auto less = std::lexicographical_compare (std::begin (phrase1), std: :end (phrase1),
std::begin(phrase2), std::end(phrase2)); std::copy(std::begin(phrase1), std::end(phrase1), std::ostream_iterator<string>{std::cout, " "});
std::cout << (less ? "are":"are not") << " less than ";
std::copy(std::begin(phrase2), std::end(phrase2), std::ostream_iterator <string>{std::cout, " "});
std::cout << std::endl;
ΪЩеĵڶԪزͬҡtigersڡhorsesδ 
the tigers of wrath are not less than the horses of instruction

26C++ next_permutation(STL next_permutation)㷨
27C++ prev_permutation(STL prev_permutation)㷨
28C++ is_permutationSTL is_permutation㷨
*/

/*
C++ copy_n(STL copy_n)㷨
C++ copy_if(STL copy_if)㷨
C++ copy_backward(STL copy_backward)
C++ reverse_copy(STL reverse_copy)
*/

/*
C++ unique(STL unique)㷨
unique() 㷨ԭƳظԪأҪ󱻴бָġƳظԪغ᷵һΪеĽ
*/

/*
C++ replace,replace_ifreplace_copy
replace() 㷨µֵ滻͸ֵƥԪءǰǱе 3 Ǳ滻ֵ 4 µֵչʾ÷:
std::deque<int> data {10, -5, 12, -6, 10, 8, -7, 10, 11};
std::replace(std::begin(data), std::end(data), 10, 99);
// Result: 99 -5 12 -6 99 8 -7 99 11
*/