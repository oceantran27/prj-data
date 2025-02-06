#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int max_board,N;
    cin>>max_board>>N;//ʾʺ
    bool col_free[1000];
    bool upward_free[1000];
    bool downward_free[1000];
    while(N--)
    {
        int col=0;
        bool success;
        for(int i=0;i<max_board;i++) col_free[i]=1;
        for(int i=0;i<2*max_board-1;i++) upward_free[i]=1;
        for(int i=0;i<2*max_board-1;i++) downward_free[i]=1;

		success=1;
        for(int row=0;row<max_board;row++)
        {
            cin>>col;//ÿһʺ
            if(col<0||col>max_board-1)
            {
            	success=0;
            	break;
			}
            if(col_free[col]&&upward_free[row+col]&&downward_free[row-col+max_board-1])
            {
                col_free[col]=0;
                upward_free[row+col]=0;
                downward_free[row-col+max_board-1]=0;
            }
            else
            {
                success=0;
            }
        }
        if(success) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
