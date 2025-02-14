/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0419_BATTLESHIPS_IN_A_BOARD_0419_BATTLESHIPS_IN_A_BOARD_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0419_BATTLESHIPS_IN_A_BOARD_0419_BATTLESHIPS_IN_A_BOARD_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
public:

    // Top, right, down, left
    // (-1, 0), (0, 1), (1, 0), (0, -1)
    
    // Only right, and down direction will work
    int dx[4] = {0, 1};
    int dy[4] = {1, 0};
    
    /** Instrumented function dfs(int,int,int,int,vector<vector<char>>&) */
void dfs(int x, int y, int n, int m, vector<vector<char>> &board) /* << Aka begin of function void dfs(int x, int y, int n, int m, vector<vector<char>> &board) >> */
{AKA_mark("Calling: .\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");AKA_fCall++;
        
        if(AKA_mark("lis===23###sois===495###eois===551###lif===2###soif===90###eoif===146###ifc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)") && (((((AKA_mark("lis===23###sois===495###eois===500###lif===2###soif===90###eoif===95###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)") && (x < 0)) || (AKA_mark("lis===23###sois===504###eois===510###lif===2###soif===99###eoif===105###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)") && (x >= n))) || (AKA_mark("lis===23###sois===514###eois===519###lif===2###soif===109###eoif===114###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)") && (y < 0))) || (AKA_mark("lis===23###sois===523###eois===529###lif===2###soif===118###eoif===124###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)") && (y >= m))) || (AKA_mark("lis===23###sois===533###eois===551###lif===2###soif===128###eoif===146###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)") && (board[x][y] != 'X'))))            {
AKA_mark("lis===23###sois===564###eois===571###lif===2###soif===159###eoif===166###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");return;
}

else {
AKA_mark("lis===-23-###sois===-495-###eois===-49556-###lif===-2-###soif===-###eoif===-146-###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");
}    
        
        AKA_mark("lis===25###sois===595###eois===613###lif===4###soif===190###eoif===208###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");board[x][y] = '.';
        
        int AKA_BLOCK_LOOP_633 = 0;
    AKA_mark("lis===27###sois===637###eois===645###lif===6###soif===232###eoif===240###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");
for(int i=0; AKA_mark("lis===27###sois===646###eois===649###lif===6###soif===241###eoif===244###ifc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)") && (AKA_mark("lis===27###sois===646###eois===649###lif===6###soif===241###eoif===244###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)") && (i<4)); ({AKA_mark("lis===27###sois===651###eois===654###lif===6###soif===246###eoif===249###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");i++;})) {
        AKA_BLOCK_LOOP_633++;
        if (AKA_BLOCK_LOOP_633 > 1000) {
            //break;
        }
            
            AKA_mark("lis===29###sois===685###eois===704###lif===8###soif===280###eoif===299###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");int x1 = x + dx[i];
            AKA_mark("lis===30###sois===718###eois===737###lif===9###soif===313###eoif===332###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");int y1 = y + dy[i];
            
            AKA_mark("lis===32###sois===765###eois===790###lif===11###soif===360###eoif===385###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");dfs(x1, y1, n, m, board);
        }
        
        AKA_mark("lis===35###sois===821###eois===828###lif===14###soif===416###eoif===423###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\dfs(int,int,int,int,vector<vector<char>>&)");return;
    }
    
    /** Instrumented function countBattleships(vector<vector<char>>&) */
int countBattleships(vector<vector<char>>& board) /* << Aka begin of function int countBattleships(vector<vector<char>>& board) >> */
{AKA_mark("Calling: .\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");AKA_fCall++;
    
        AKA_mark("lis===40###sois===914###eois===928###lif===2###soif===67###eoif===81###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");int count = 0;
        
        AKA_mark("lis===42###sois===948###eois===969###lif===4###soif===101###eoif===122###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");int n = board.size();
        AKA_mark("lis===43###sois===979###eois===1003###lif===5###soif===132###eoif===156###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");int m = board[0].size();
        
        int AKA_BLOCK_LOOP_1023 = 0;
    AKA_mark("lis===45###sois===1027###eois===1035###lif===7###soif===180###eoif===188###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");
for(int i=0; AKA_mark("lis===45###sois===1036###eois===1039###lif===7###soif===189###eoif===192###ifc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)") && (AKA_mark("lis===45###sois===1036###eois===1039###lif===7###soif===189###eoif===192###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)") && (i<n)); ({AKA_mark("lis===45###sois===1041###eois===1044###lif===7###soif===194###eoif===197###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");i++;})) {
        AKA_BLOCK_LOOP_1023++;
        if (AKA_BLOCK_LOOP_1023 > 1000) {
            //break;
        }
            int AKA_BLOCK_LOOP_1061 = 0;
    AKA_mark("lis===46###sois===1065###eois===1073###lif===8###soif===218###eoif===226###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");
for(int j=0; AKA_mark("lis===46###sois===1074###eois===1077###lif===8###soif===227###eoif===230###ifc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)") && (AKA_mark("lis===46###sois===1074###eois===1077###lif===8###soif===227###eoif===230###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)") && (j<m)); ({AKA_mark("lis===46###sois===1079###eois===1082###lif===8###soif===232###eoif===235###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");j++;})) {
        AKA_BLOCK_LOOP_1061++;
        if (AKA_BLOCK_LOOP_1061 > 1000) {
            //break;
        }
            
                if(AKA_mark("lis===48###sois===1120###eois===1138###lif===10###soif===273###eoif===291###ifc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)") && (AKA_mark("lis===48###sois===1120###eois===1138###lif===10###soif===273###eoif===291###isc===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)") && (board[i][j] == 'X'))) {
                   AKA_mark("lis===49###sois===1162###eois===1185###lif===11###soif===315###eoif===338###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");dfs(i, j, n, m, board);
                   AKA_mark("lis===50###sois===1206###eois===1214###lif===12###soif===359###eoif===367###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");count++;
                }
else {
AKA_mark("lis===-48-###sois===-1120-###eois===-112018-###lif===-10-###soif===-###eoif===-291-###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");
}
            }
        }
        
        AKA_mark("lis===55###sois===1279###eois===1292###lif===17###soif===432###eoif===445###ins===true###function===.\\p4\\0419-battleships-in-a-board\\0419-battleships-in-a-board.cpp\\Solution\\countBattleships(vector<vector<char>>&)");return count;
    }
    
};
#endif
