#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// string.cpp : ̨Ӧóڵ㡣
// ׼C++string࣬Ҫ#include<string>using namespace std;
// ȻͿstring/wstringˣֱӦcharwchar_t
// Ҫο
// 1׼C++еstring÷ܽᣨת 
// http://www.cnblogs.com/xFreedom/archive/2011/05/16/2048037.html

#include "stdafx.h"
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
ʼdemo
*/
void InitialDemo()
{
	string str1(5, 'c');//ʼΪ5'c'
	string str2("Now is the time...");
	string str3(str2, 11, 4);//str2ĵ11ַʼȡ4ַ
	string str4;
	str4.append(3, 'h');//3'h'
	char chr[6];
	memset(chr, '\0', sizeof(chr));
	chr[0] = '2';
	string str5(chr);

	cout << endl << "InitialDemo:" << endl;
	cout << str1 << endl;
	if(str1[5]== '\0')
	{
		cout << "Խstr1[5]=\0" << endl;//
	}
	else
	{
		cout << "Խstr1[5]=" << str1[5] << endl;//
	}
	//cout << "Խstr1[6]=" << str1[6] << endl;//쳣
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	
}

/*
ֵ滻demo
*/
void AssignReplaceDemo()
{
	cout << endl << "AssignReplaceDemo:" << endl;

	string str1, str2 = "War and Peace";
	str1.assign(str2, 4, 3);
	//Ϊand
	cout << str1 << endl;

	string s = "They say he carved it himself...from a BIGGER spoon";
	string s2 = "find your soul-mate, Homer.";
	//s[1] = "1";ʽ
	//replace(off,number,new string)
	//ΪThey find your soul-mate, Homer.from a BIGGER spoon
	s.replace(5, s2.length(), s2);
	cout << s << endl;

}

string ReverseStringDemo(string s) 
{
	int left = 0, right = s.size() - 1;
	while (left < right) 
	{
		char t = s[left];
		s[left++] = s[right];
		s[right--] = t;
	}
	return s;
}

string ReverseStringDemo2(string s) {
	int left = 0, right = s.size() - 1;
	while (left < right) {
		swap(s[left++], s[right--]);
	}
	return s;
}

/*
stringתΪchar*
char*תΪstring
*/
void Change2CharDemo()
{
	cout << endl << "Change2CharDemo:" << endl;

	string str1 = "War and Peace";
	const char* chr = str1.c_str();
	cout << chr << endl;

	//char chr2[10]һ
	char* chr2 = "to_string";
	string str2 = chr2;
	cout << str2 << endl;
}

/*
stringתΪInt
intתΪstring
*/
void Change2IntDemo()
{
	cout << endl << "Change2IntDemo" << endl;

	//stoistringתint
	string str1 = "-20";
	string str2 = "5";
	int ret = stoi(str1) + stoi(str2);
	cout << "string to int: -20+5=" << ret << " " << endl;

	//to_stringֵתstring
	int a = -3, b = 37;
	string a_plus_b = to_string(a + b);
	cout << "int to string: -3+37=" << a_plus_b << " " << endl;

	//strtolstringתlong_Radixʾơ
	//stolstringתlongתBase=0ʱʹĬϵʮ
	string str3 = "-0x12";
	string str4 = "0x76E";//1902
	char *offset;
	cout << "string to int: -0x12=" << strtol(str3.c_str(),&offset,0) << " " << endl;
	cout << "string to int: 0x76E=" << strtol(str4.c_str(), &offset, 0) << " " << endl;
	cout << "string to int: 0x76E=" << stol(str4, nullptr,0) << " " << endl;
	string str5 = "A4";
	char *offset5;
	int istr5 = strtol(str5.c_str(), &offset5, 10);
	cout << "string to int: A4=" << istr5 << " " << endl;//0
}

void SubStringDemo()
{
	string str = "20+-22i";
	int size = str.size();
	int plus = str.find("+");
	string real = str.substr(0, plus);//off,count
	string imaginary = str.substr(plus + 1, size - plus - 2);
	cout << "substring: " << real << " " << imaginary << endl;
}

void FindDemo()
{
	string str;
	cout << "FindDemo: please cin words and find spaces "<<endl;
	getline(cin, str);
	//hello world=5
	//helloworld=-1=string
	int begin = str.find(' ');
	int end = str.find_last_of(' ');//hello world =5
	string last(str, end + 1, str.size() - end);
	cout << last<<" "<<last.size() << endl;;
}

void AddDemo()
{
	cout << endl << "AddDemo" << endl;
	string str = "";
	str += "5";
	cout << str << endl;
	str.append("11");
	cout << str << endl;
	str.append(5,'0');
	cout << str << endl;
}

void CompareDemo()
{
	cout << endl << "CompareDemo:" << endl;
	string str1("aaa");
	string str2("aab");
	string str3("aaaa");
	bool ret = str1 < str2;
	cout << ret << endl;
	ret = str1 < str3;
	cout << ret << endl;
	ret = str2 < str3;
	cout << ret << endl;

}

void WStringDemo()
{
	wstring wstr1;
	wstr1 = L"ABCstring";
	wstring wstr2(L"AXX");
	int s1 = wstr1.size();
}

/*
ÿոַָʾ
STLûԭsplit
*/
void SplitDemo() {
	cout << endl << "begin SplitDemo" << endl;
	string str = "hello world! this is a string.";
	vector<string> str_arr;
	string temp;
	int offset = 0;
	int newOffset = 0;
	//ȡոλãûпոʱ-1
	while (offset<str.size()&& newOffset>=0)
	{
		newOffset = str.find(' ', offset);
		temp = str.substr(offset, newOffset - offset);
		str_arr.push_back(temp);
		offset = newOffset + 1;
	}
	cout << "origin string = " << str << endl;
	cout << "split arr size = " << str_arr.size() << endl;
	for (int i = 0;i < str_arr.size();i++) {
		cout << "str_arr[" << i << "] = " << str_arr[i] << endl;
	}
	cout << "end SplitDemo" << endl;
}

int main()
{
	SplitDemo();
	WStringDemo();
	InitialDemo();
	AssignReplaceDemo();
	Change2CharDemo();
	Change2IntDemo();
	SubStringDemo();
	FindDemo();
	AddDemo();
	CompareDemo();
	system("pause");
    return 0;
}

