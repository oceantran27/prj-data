/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0990_SATISFIABILITY_OF_EQUALITY_EQUATIONS_0990_SATISFIABILITY_OF_EQUALITY_EQUATIONS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0990_SATISFIABILITY_OF_EQUALITY_EQUATIONS_0990_SATISFIABILITY_OF_EQUALITY_EQUATIONS_CPP
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
    
    /** Instrumented function dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&) */
void dfs(char node1, char dest, unordered_map<char, vector<char>> &adj, unordered_map<char, int> &vis, bool &flag) /* << Aka begin of function void dfs(char node1, char dest, unordered_map<char, vector<char>> &adj, unordered_map<char, int> &vis, bool &flag) >> */
{AKA_mark("Calling: .\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");AKA_fCall++;
        
        if(AKA_mark("lis===16###sois===365###eois===377###lif===2###soif===139###eoif===151###ifc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)") && (AKA_mark("lis===16###sois===365###eois===377###lif===2###soif===139###eoif===151###isc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)") && (flag == true)))                            {
AKA_mark("lis===16###sois===406###eois===413###lif===2###soif===180###eoif===187###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");return;
}

else {
AKA_mark("lis===-16-###sois===-365-###eois===-36512-###lif===-2-###soif===-###eoif===-151-###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");
}
        
        AKA_mark("lis===18###sois===433###eois===448###lif===4###soif===207###eoif===222###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");vis[node1] = 1;
        
        if(AKA_mark("lis===20###sois===471###eois===484###lif===6###soif===245###eoif===258###ifc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)") && (AKA_mark("lis===20###sois===471###eois===484###lif===6###soif===245###eoif===258###isc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)") && (node1 == dest))) {
            AKA_mark("lis===21###sois===501###eois===513###lif===7###soif===275###eoif===287###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");flag = true;
            AKA_mark("lis===22###sois===527###eois===534###lif===8###soif===301###eoif===308###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");return;
        }
else {
AKA_mark("lis===-20-###sois===-471-###eois===-47113-###lif===-6-###soif===-###eoif===-258-###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");
}
        
        for(auto &ch : adj[node1]) {
AKA_mark("lis===25###sois===569###eois===577###lif===11###soif===343###eoif===351###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");
{
            if(AKA_mark("lis===26###sois===610###eois===622###lif===12###soif===384###eoif===396###ifc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)") && (AKA_mark("lis===26###sois===610###eois===622###lif===12###soif===384###eoif===396###isc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)") && (vis[ch] == 0))) {
                AKA_mark("lis===27###sois===643###eois===673###lif===13###soif===417###eoif===447###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");dfs(ch, dest, adj, vis, flag);
            }
else {
AKA_mark("lis===-26-###sois===-610-###eois===-61012-###lif===-12-###soif===-###eoif===-396-###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");
}
        }}
AKA_mark("lis===25###sois===569###eois===577###lif===11###soif===343###eoif===351###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");

        
        AKA_mark("lis===31###sois===719###eois===726###lif===17###soif===493###eoif===500###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\dfs(char,char,unordered_map<char,vector<char>>&,unordered_map<char,int>&,bool&)");return;
    }
    
    /** Instrumented function equationsPossible(vector<string>&) */
bool equationsPossible(vector<string>& equations) /* << Aka begin of function bool equationsPossible(vector<string>& equations) >> */
{AKA_mark("Calling: .\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");AKA_fCall++;
    
        AKA_mark("lis===36###sois===812###eois===850###lif===2###soif===67###eoif===105###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");unordered_map<char, vector<char>> adj;
        AKA_mark("lis===37###sois===860###eois===885###lif===3###soif===115###eoif===140###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");int n = equations.size();
        
        for(auto &x : equations) {
AKA_mark("lis===39###sois===909###eois===916###lif===5###soif===164###eoif===171###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");
{
            
            AKA_mark("lis===41###sois===959###eois===972###lif===7###soif===214###eoif===227###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");string s = x;
            
            if(AKA_mark("lis===43###sois===1003###eois===1014###lif===9###soif===258###eoif===269###ifc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)") && (AKA_mark("lis===43###sois===1003###eois===1014###lif===9###soif===258###eoif===269###isc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)") && (s[1] == '='))) {
                AKA_mark("lis===44###sois===1035###eois===1061###lif===10###soif===290###eoif===316###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");adj[s[0]].push_back(s[3]);
                AKA_mark("lis===45###sois===1079###eois===1105###lif===11###soif===334###eoif===360###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");adj[s[3]].push_back(s[0]);
            }
else {
AKA_mark("lis===-43-###sois===-1003-###eois===-100311-###lif===-9-###soif===-###eoif===-269-###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");
}
        }}
AKA_mark("lis===39###sois===909###eois===916###lif===5###soif===164###eoif===171###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");

        
        for(auto &x : equations) {
AKA_mark("lis===49###sois===1155###eois===1162###lif===15###soif===410###eoif===417###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");
{
            
            if(AKA_mark("lis===51###sois===1208###eois===1219###lif===17###soif===463###eoif===474###ifc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)") && (AKA_mark("lis===51###sois===1208###eois===1219###lif===17###soif===463###eoif===474###isc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)") && (x[1] == '!'))) {
                
                AKA_mark("lis===53###sois===1258###eois===1276###lif===19###soif===513###eoif===531###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");char node1 = x[0];
                AKA_mark("lis===54###sois===1294###eois===1312###lif===20###soif===549###eoif===567###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");char node2 = x[3];
                
                // Check whether node1 and node2 are connected by any chance
                AKA_mark("lis===57###sois===1426###eois===1444###lif===23###soif===681###eoif===699###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");bool flag = false;
                AKA_mark("lis===58###sois===1462###eois===1491###lif===24###soif===717###eoif===746###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");unordered_map<char, int> vis;
                
                AKA_mark("lis===60###sois===1527###eois===1561###lif===26###soif===782###eoif===816###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");dfs(node1, node2, adj, vis, flag);
                AKA_mark("lis===61###sois===1579###eois===1591###lif===27###soif===834###eoif===846###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");vis.clear();
                
                if(AKA_mark("lis===63###sois===1630###eois===1642###lif===29###soif===885###eoif===897###ifc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)") && (AKA_mark("lis===63###sois===1630###eois===1642###lif===29###soif===885###eoif===897###isc===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)") && (flag == true)))                        {
AKA_mark("lis===63###sois===1667###eois===1680###lif===29###soif===922###eoif===935###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");return false;
}

else {
AKA_mark("lis===-63-###sois===-1630-###eois===-163012-###lif===-29-###soif===-###eoif===-897-###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");
}
            }
else {
AKA_mark("lis===-51-###sois===-1208-###eois===-120811-###lif===-17-###soif===-###eoif===-474-###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");
}
        }}
AKA_mark("lis===49###sois===1155###eois===1162###lif===15###soif===410###eoif===417###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");

        
        AKA_mark("lis===67###sois===1726###eois===1738###lif===33###soif===981###eoif===993###ins===true###function===.\\p8\\0990-satisfiability-of-equality-equations\\0990-satisfiability-of-equality-equations.cpp\\Solution\\equationsPossible(vector<string>&)");return true;
    }
    
};
#endif
