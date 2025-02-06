#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;
class Mystring {
public:
	Mystring()
	{
		str = NULL;
	}
	~Mystring()
	{
		delete[]str;
	}
	Mystring(const Mystring &copy)//copy constructor
	{
		int len = copy.length();
		char* hold = new char[len + 1];
		strcpy(hold, copy.c_str());
		str = hold;//holdڴռstr
	}
	Mystring(const char*copy)//conversion from C-string
	{
		int len = strlen(copy);
		char* hold = new char[len+1];
		strcpy(hold, copy);
		str = hold;//holdڴռstr
	}
	void operator = (const Mystring &copy)//assignment
	{
		if (str != NULL)
		{
			delete[]str;
		}
		int len = copy.length();
		char* hold = new char[len + 1];
		strcpy(hold, copy.c_str());
		str = hold;//holdڴռstr
	}
	const char *c_str() const //get C-string equvalent
	{
		return (const char*)str;
	}
	size_t length() const
	{
		return strlen(str);
	}
	//search the first occurence of str after pos in Mystring and returns the first occurence, returns length of Mystring otherwise.
	size_t find_first_of(const Mystring *Str, size_t pos = 0) const
	{
		int len1 = length();
		int len2 = Str->length();//Ӵ
		int i = 0, j = 0;
		while (i < len1 && j < len2)
		{
			if (str[i] != Str->str[j])
			{
				
				i - j + 1;
			}
			else
			{
				i++, j++;
			}
			if (j == len2)
			{
				return i - j;
			}
		}
		return len1;
	}
	//returns a newly constructed Mystring object with its value initialied to a copy of a substring of this object from start to end.
	Mystring substr(size_t start, size_t end)  //start and end are starting index and end index of the substr.
	{
		int len = end - start + 1;
		char* hold = new char[len+1];
		for (int i = start,k=0; i <= end; i++,k++)
		{
			hold[k] = str[i];
		}
		hold[len] = '\0';
		Mystring ret(hold);
		delete[]hold;//ͷڴ
		return ret;
	}

private:
	char* str;
};
int main()
{	
	Mystring str("abcdefghijklmnopqrstuvk");
	Mystring *a= new Mystring("bc");
	cout<<str.find_first_of((const Mystring*)a);
	
	return 0;
}
