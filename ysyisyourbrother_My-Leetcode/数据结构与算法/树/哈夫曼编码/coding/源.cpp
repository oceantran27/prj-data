#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include <queue>
#include <deque>
#include <map>
using namespace std;
class huffmanTree
{
private:
	struct Node//Ľڵ
{
	char x;
	int prob;//ָ
	Node* later1;//0
	Node* later2;//1
	Node(char x = 0, int prob = 0, Node*later1 = NULL, Node*later2 = NULL) :x(x), prob(prob), later1(later1), later2(later2) {}

};
	struct cmp1//ȶСֵȵıȽϺ
	{
		bool operator ()(Node *&a, Node *&b) {
			return (*a).prob > (*b).prob;//Сֵ  
		}
	};
	Node* root;//úĹ
	map<char, string> charTocode;//ĸĸ
	string textString;//Ҫı
	string codeString;//Ҫı
	int charcount;//һж01λ
public:
	huffmanTree()
	{
		root = NULL;
		charcount = 0;
	}
	~huffmanTree()
	{
		destroyTree(root);
	}
	string compress(string buffer)
	{
		char temp = 0;
		string result;
		int basic = 1;
		for (int i = buffer.size() - 1; i>=0 ; i--)
		{
			if (basic == 128)//ÿ7ַ
			{
				result = temp + result;
				basic = 1;
				temp = 0;
			}
			if (buffer[i] == '1')
				temp = temp | basic;
			basic *= 2;
		}
		result = temp + result;
		return result;
	}
	string decompress(string &buffer)
	{
		string result;
		int count = charcount;
		for (int i = buffer.size()-1; i >=0; i--)
		{
			int basic = 1;
			char temp = buffer[i];
			for (int j = 0; j < 7 && count > 0; j++)
			{
				if ((int)(temp & basic) != 0)
					result = '1' + result;
				else
					result = '0' + result;
				basic *= 2;
				count--;
			}	
		}
		return result;
	}
	void readtext(string address)
	{
		ifstream input(address.c_str());
		string temp((istreambuf_iterator<char>(input)), istreambuf_iterator<char>());
		textString = temp;
		input.close();
	}
	void readcode(string address)
	{
		ifstream input(address.c_str());
		string temp((istreambuf_iterator<char>(input)), istreambuf_iterator<char>());
		codeString = decompress(temp);
		input.close();
	}
	void outputcode(string address)
	{
		ofstream output(address.c_str());
		string buffer;
		for (int i = 0; i < textString.size(); i++)
		{
			buffer += charTocode[textString[i]];
		}
		charcount = buffer.size();
		output << compress(buffer);
		output.close();
	}
	void outputtext(string address)
	{
		if (root!=NULL)
		{
			ofstream output(address.c_str());
			Node* subroot = root;
			for (int i = 0; i < codeString.size(); i++)
			{
				if (subroot->later1 == NULL && subroot->later2 == NULL)
				{
					output << subroot->x;
					subroot = root;
				}
				if (codeString[i] == '0')
				{
					subroot = subroot->later1;
				}
				else
				{
					subroot = subroot->later2;
				}
			}
			output << subroot->x;
			output.close();
		}
	}
	void countProb(priority_queue<Node*, vector<Node*>, cmp1> &pq)
	{
		map<char, int> countChar;
		map<char, int>::iterator it;
		for (int i = 0; i < textString.size(); i++)
		{
			it = countChar.find(textString[i]);
			if (it != countChar.end())
			{
				(*it).second++;
			}
			else
			{
				countChar.insert(make_pair(textString[i], 1));
			}
		}
		for (it = countChar.begin(); it != countChar.end(); it++)
		{
			Node* temp = new Node((*it).first, (*it).second);
			pq.push(temp);
		}
	}
	void buildTree(priority_queue<Node*, vector<Node*>, cmp1> &pq)//
	{
		while (pq.size() > 1)
		{
			Node *tree1 = pq.top();
			pq.pop();
			Node *tree2 = pq.top();
			pq.pop();
			Node* temp = new Node(0, (*tree1).prob + (*tree2).prob, tree2, tree1);
			pq.push(temp);
		}
		root = pq.top();
	}
	void dfs(Node* subroot, map<char, string> &charTocode, string a)
	{
		if (subroot)
		{
			if (subroot->later1 == NULL && subroot->later2 == NULL)
			{
				charTocode[subroot->x] = a;
			}
			else
			{
				string left = a + '0';
				string right = a + '1';
				dfs(subroot->later1, charTocode, left);
				dfs(subroot->later2, charTocode, right);
			}
		}
	}
	void destroyTree(Node*root)
	{
		if (root != NULL)
		{
			destroyTree(root->later1);
			destroyTree(root->later2);
			delete root;
			root = NULL;
		}
	}
	void huffmanCoding(string input_address,string outaddress)//ȡı
	{
		//ȡı
		readtext(input_address);//ȡıļַ	
		//ֵַĴ С
		priority_queue<Node*, vector<Node*>, cmp1> pq;//װַڵȶ
		countProb(pq);
		//Сѽ
		buildTree(pq);
		//ù
		string a;
		dfs(root, charTocode, a);
		//ı
		outputcode(outaddress);
	}
	void huffmanDeCoding(string input_address, string outaddress)
	{
		if (root != NULL)
		{
			readcode(input_address);//ȡıļ01
			outputtext(outaddress);//ַ
		}
		
	}
};

int main()
{
	string input_address1 = "huffmanCoding inputfile.txt";
	string output_address1 = "huffmanCoding outputfile.txt";
	huffmanTree testTree;
	testTree.huffmanCoding(input_address1, output_address1);
	return 0;
}
