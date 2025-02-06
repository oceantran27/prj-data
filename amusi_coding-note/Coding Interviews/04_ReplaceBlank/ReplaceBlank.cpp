#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-09

Ŀ
ʵһһַеĿո滻ɡ%20
磬ַΪWe Are Happy.򾭹滻ַ֮ΪWe%20Are%20Happy

: ַַ󳤶
: 


˼·
صgetβδݣַָ룩Ҫԣʵ"ô"⣩
ĿĲǷµַܼ򵥣Ƕԭַָָݽ޸ġ

ȻǶԭַָָݽ޸ģӦҪַַָָԭʼЧȺͿո
ԭʼȺͿոԼµַȣٴ󣬶ַݽ޸ġ
ʱַʵһԭʼַһַȻԭʼַַָݶͬһ
Ӹ⣬ַЧȱԭʼַЧҪֵַ治ӽġ

ԭַʼֵԭַ-1Ȼжϵǰֵָǲǿոǿո
ַǰֵַʼֵַ-1滻Ϊ'0', '2''%'ֵÿֵһΣҪ-1

ΪʲôǵأΪǴע⿩ÿθֵֵҪ-1ǿոֱӽԭַָԪ滻ַָԪؼɡ

ôʲôʱֹͣأȻԭַЧԪؼɡ

עĹ׺ܲдĽΪҿᣬ


ⲽ
˼·ʵд˸ţﲻ׸


PS: Amusiڽ·ѶʵϰԵʱ⣬ĽⷨԳ֤ˢҪԡ


*****************************************/

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


class Solution {
public:
	/***************************
	: 滻ո
	:
	str: ַ
	length: ַ󳤶
	****************************/
	void replaceSpace(char *str, int length) {
		if (str == NULL || length <= 0){
			return;
		}

		// 1. ַȺͿո
		unsigned int original_length = 0;
		unsigned int number_blank = 0;
		unsigned int i = 0;
		while (str[i] != '\0'){
			++original_length;

			if (str[i] == ' ')	// or if(str[i] == 32) // ոASCIIΪ32
				++number_blank;
			++i;
		}

		// 2. µַ
		unsigned int new_length = original_length + number_blank * 2;
		if (new_length > length)
			return;

		int index_original = original_length;
		int index_new = new_length;

		// 3. µַո滻%20
		while (index_original >= 0 && index_new > index_original){
			if (str[index_original] == ' ')
			{
				str[index_new--] = '0';
				str[index_new--] = '2';
				str[index_new--] = '%';
			}
			else{
				str[index_new--] = str[index_original];
			}
			
			--index_original;	// 
		}

	}
};

int main()
{
	const int length = 100;
	char string[length] = "We Are Happy";

	Solution ss;
	ss.replaceSpace(string, 100);

	return 0;
}