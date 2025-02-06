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

#pragma region AStar㷨

/*
1.  A ʼ, Ϊķһ"б",
бһȴ鷽 б.

2. Ѱ A ΧԵķ, Ƿ"б",
ǵ""Ϊ A.

3. "б"ɾ A,  A "رб",
"رб"дŵĶǲҪٴμķ
 "б" ҳ׵ķ, ʲô? 
ͨʽ F=G+H .

F = G + H

G ʾ A ƶָƶķ (бƶ).
H ʾָķƶյ B Ԥƺķ (H кܶ㷽,
趨ֻ ƶ).
 "б" ѡ F ֵ͵ķ C (ɫʼ A ұߵ
), Ȼ´ :

4.  "б" ɾ, ŵ "رб" .

5. ڲҿԵ (ϰ "رб" ķ񶼲
) ķ. Щ  "б" Ļ, Ǽ
"б", Щ G, H  F ֵǶ,  ǵ "" Ϊ C.

6. ĳڷ D Ѿ "б" , µ
· (Ǿ C ·)  Ļ, G ֵǷһЩ, 
µ G ֵ, ǾͰ "" ΪĿǰѡеķ C, Ȼ
¼ F ֵ G ֵ (H ֵҪ¼, Ϊÿ,
H ֵǲ). µ G ֵȽϸ, ˵ C ٵ D 
һǵѡ, ΪҪԶ·, ʱʲôҲ.
*/

enum state { valid = 0, wall = 1, open = 2, close = 3,start=4,end=5 };
struct mPoint {
	int x = -1, y = -1;

	int pre_x = -1, pre_y = -1;

	double f = INT_MAX;//f=g+h
	double g = 0;//㵽
	double h = 0;//ﵽյ
	
	state s=state::valid;
	void Update(mPoint p, double gIn, double hIn)
	{
		pre_x = p.x;
		pre_y = p.y;
		g = gIn;
		h = hIn;
		f = g + h;
	}

	//setԶȥ
	bool operator<(const struct mPoint & right)const   //<
	{
		if (this->x == right.x&&this->y == right.y)     //idȥ
			return false;
		else
		{
			if (this->x != right.x)
			{
				return this->x < right.x;      //
			}
			else
			{
				return this->y < right.y;
			}
		}
	}
};

int startx = 0, starty = 0, endx, endy;
set<mPoint> openlist;
set<mPoint> closelist;

double GetDistance(int x, int y)
{
	return abs(endx - x) + abs(endy - y);
}

bool isValid(mPoint p, int maxX, int maxY)
{
	//ǽ
	if (p.s == state::wall)
		return false;
	//Ѿڹرбٿ
	else if (p.s == state::close|| p.s == state::start)
		return false;
	else
	{
		return true;
	}
}

void GetNextPoint(int cur_x, int cur_y, int i,int& next_x,int& next_y)
{
	switch (i)
	{
	case 0:
		next_x = cur_x - 1;
		next_y = cur_y;
		break;
	case 1:
		next_x = cur_x + 1;
		next_y = cur_y;
		break;
	case 2:
		next_x = cur_x;
		next_y = cur_y - 1;
		break;
	case 3:
		next_x = cur_x;
		next_y = cur_y + 1;
		break;
	default:
		break;
	}
}

void FindMinFOfPoint(mPoint &p)
{
	double min_f = INT_MAX;
	for (auto it = openlist.begin(); it != openlist.end(); it++)
	{
		if (min_f>=(*it).f)
		{
			min_f = (*it).f;
			p.x = (*it).x;
			p.y = (*it).y;
		}
	}
}

bool Insert(int cur_x, int cur_y, vector<vector<mPoint>> &imap)
{
	for (size_t i = 0; i < 4; i++)
	{
		int next_x = -1, next_y = -1;
		GetNextPoint(cur_x, cur_y,i, next_x, next_y);
		
		//Խ
		if (next_x < 0 || next_y < 0 || next_x >= imap.size() || next_y >= imap[0].size())
			continue;

		if (!isValid(imap[next_x][next_y], endx, endy))
			continue;

		if (imap[next_x][next_y].s==state::end)
		{
			imap[next_x][next_y].Update(imap[cur_x][cur_y], imap[cur_x][cur_y].g + 1, 0);
			return true;
		}

		int h = GetDistance(next_x, next_y);
		int g = imap[cur_x][cur_y].g + 1;
		
		//Χڵopenб
		if (imap[next_x][next_y].s==state::open)
		{
			//㾭OpenбСfֵΧڵGֵ
			if (g<imap[next_x][next_y].g)
			{
				imap[next_x][next_y].Update(imap[cur_x][cur_y], g, h);
			}
		}
		//Χڵ㲻Openб
		else
		{
			imap[next_x][next_y].Update(imap[cur_x][cur_y], g, h);
			openlist.insert(imap[next_x][next_y]);
			imap[next_x][next_y].s = state::open;
		}
	}
	return false;
}

void FindPath(vector<vector<mPoint>> &imap)
{
	imap[startx][starty].g = 0;
	imap[startx][starty].h = GetDistance(startx, starty);
	imap[startx][starty].f = imap[startx][starty].g+ imap[startx][starty].h;
	openlist.insert(imap[startx][starty]);

	while (openlist.size()>0)
	{
		mPoint p;
		FindMinFOfPoint(p);//OpenбСfֵ
		openlist.erase(imap[p.x][p.y]);
		closelist.insert(imap[p.x][p.y]);//ٿǵǰڵ
		if (imap[p.x][p.y].s == state::valid||
			imap[p.x][p.y].s == state::open)
		{
			imap[p.x][p.y].s = state::close;
		}

		bool isEnd=Insert(p.x, p.y, imap);
		if (isEnd)
		{
			break;
		}
	}
}

void Output(vector<vector<mPoint>> &imap)
{
	mPoint cur = imap[endx][endy];
	vector<string> a;
	while (cur.s!=state::start)
	{
		string tmp = "(";
		tmp += to_string(cur.x);
		tmp += ",";
		tmp += to_string(cur.y);
		tmp += ")";
		a.push_back(tmp);
		cur = imap[cur.pre_x][cur.pre_y];
	}
	string tmp = "(";
	tmp += to_string(cur.x);
	tmp += ",";
	tmp += to_string(cur.y);
	tmp += ")";
	a.push_back(tmp);

	for (int i = a.size()-1; i >=0 ; i--)
	{
		cout << a[i] << endl;
	}
}

int test_mi_gong_wen_ti()
{
	int n, m;
	while (cin >> n >> m)
	{
		vector<vector<mPoint>> imap(n);
		openlist.clear();
		closelist.clear();
		//
		startx = 0, starty = 0, endx = n - 1, endy = m - 1;
		for (int i = 0;i<n;i++)
		{
			imap[i].resize(m);
		}
		int tmp;
		for (int i = 0;i<n;i++)
		{
			for (int j = 0;j<m;j++)
			{
				cin >> tmp;
				imap[i][j].x = i;
				imap[i][j].y = j;
				if (tmp == 1)
				{
					imap[i][j].s = state::wall;
				}
			}
		}
		imap[startx][starty].s = state::start;
		imap[endx][endy].s = state::end;
		//Ѱ·
		FindPath(imap);
		//
		Output(imap);
	}
	return 0;
}

#pragma endregion

#pragma region 㷨

int N, M; //ֱк
vector<vector<int>> maze;//Թ
vector<vector<int>> path_temp;//洢ǰ·һάʾλ
vector<vector<int>> path_best;//洢·

void MazeTrack(int i, int j)
{
	maze[i][j] = 1;//ʾǰڵߣ
	path_temp.push_back({ i, j });//ǰڵ뵽·

	if (i == N - 1 && j == M - 1) //жǷ񵽴յ
		if (path_best.empty() || path_temp.size() < path_best.size())
			path_best = path_temp;

	if (i - 1 >= 0 && maze[i - 1][j] == 0)//̽Ƿ
		MazeTrack(i - 1, j);
	if (i + 1 < N && maze[i + 1][j] == 0)//̽Ƿ
		MazeTrack(i + 1, j);
	if (j - 1 >= 0 && maze[i][j - 1] == 0)//̽Ƿ
		MazeTrack(i, j - 1);
	if (j + 1 < M && maze[i][j + 1] == 0)//̽Ƿ
		MazeTrack(i, j + 1);
	maze[i][j] = 0;         //ֳָΪδ
	path_temp.pop_back();
}
int test_43()
{
	while (cin >> N >> M)
	{
		maze = vector<vector<int>>(N, vector<int>(M, 0));
		path_temp.clear();
		path_best.clear();
		for (auto &i : maze)
			for (auto &j : i)
				cin >> j;
		MazeTrack(0, 0);//ѰԹͨ·
		for (auto i : path_best)
			cout << '(' << i[0] << ',' << i[1] << ')' << endl;//ͨ·
	}
	return 0;
}

#pragma endregion
