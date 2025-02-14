/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0449_SERIALIZE_AND_DESERIALIZE_BST_0449_SERIALIZE_AND_DESERIALIZE_BST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0449_SERIALIZE_AND_DESERIALIZE_BST_0449_SERIALIZE_AND_DESERIALIZE_BST_CPP
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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(NULL), right(NULL) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
 };

class Codec {
public:
public:

    /** Instrumented function bfs(TreeNode*,string&) */
void bfs(TreeNode* root, string &res) /* << Aka begin of function void bfs(TreeNode* root, string &res) >> */
{AKA_mark("Calling: .\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");AKA_fCall++;
        
        if(AKA_mark("lis===33###sois===634###eois===646###lif===2###soif===62###eoif===74###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (AKA_mark("lis===33###sois===634###eois===646###lif===2###soif===62###eoif===74###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (root == NULL)))                        {
AKA_mark("lis===33###sois===671###eois===678###lif===2###soif===99###eoif===106###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");return;
}

else {
AKA_mark("lis===-33-###sois===-634-###eois===-63412-###lif===-2-###soif===-###eoif===-74-###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");
}
        
        AKA_mark("lis===35###sois===698###eois===717###lif===4###soif===126###eoif===145###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");queue<TreeNode*> q;
        AKA_mark("lis===36###sois===727###eois===740###lif===5###soif===155###eoif===168###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");q.push(root);
        
        int AKA_BLOCK_LOOP_760 = 0;
    while(AKA_mark("lis===38###sois===766###eois===784###lif===7###soif===194###eoif===212###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (AKA_mark("lis===38###sois===766###eois===784###lif===7###soif===194###eoif===212###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (q.empty() == false))) {
        AKA_BLOCK_LOOP_760++;
        if (AKA_BLOCK_LOOP_760 > 1000) {
            //break;
        }
            
            AKA_mark("lis===40###sois===815###eois===832###lif===9###soif===243###eoif===260###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");int n = q.size();
            
            int AKA_BLOCK_LOOP_860 = 0;
    while(AKA_mark("lis===42###sois===866###eois===869###lif===11###soif===294###eoif===297###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (AKA_mark("lis===42###sois===866###eois===869###lif===11###soif===294###eoif===297###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (n--))) {
        AKA_BLOCK_LOOP_860++;
        if (AKA_BLOCK_LOOP_860 > 1000) {
            //break;
        }
                
                AKA_mark("lis===44###sois===908###eois===935###lif===13###soif===336###eoif===363###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");TreeNode* temp = q.front();
                AKA_mark("lis===45###sois===953###eois===961###lif===14###soif===381###eoif===389###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");q.pop();
                
                if(AKA_mark("lis===47###sois===1000###eois===1012###lif===16###soif===428###eoif===440###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (AKA_mark("lis===47###sois===1000###eois===1012###lif===16###soif===428###eoif===440###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (temp == NULL)))                {
AKA_mark("lis===47###sois===1029###eois===1041###lif===16###soif===457###eoif===469###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");res += "#,";
}

                else                            {
AKA_mark("lis===48###sois===1091###eois===1125###lif===17###soif===519###eoif===553###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");res += to_string(temp->val) + ',';
}
   
                
                if(AKA_mark("lis===50###sois===1167###eois===1179###lif===19###soif===595###eoif===607###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (AKA_mark("lis===50###sois===1167###eois===1179###lif===19###soif===595###eoif===607###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)") && (temp != NULL))) {
                    AKA_mark("lis===51###sois===1204###eois===1223###lif===20###soif===632###eoif===651###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");q.push(temp->left);
                    AKA_mark("lis===52###sois===1245###eois===1265###lif===21###soif===673###eoif===693###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");q.push(temp->right);
                }
else {
AKA_mark("lis===-50-###sois===-1167-###eois===-116712-###lif===-19-###soif===-###eoif===-607-###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");
}   
            }
        }
        
        AKA_mark("lis===57###sois===1333###eois===1340###lif===26###soif===761###eoif===768###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\bfs(TreeNode*,string&)");return;
    }
    
    // Encodes a tree to a single string.
    /** Instrumented function serialize(TreeNode*) */
string serialize(TreeNode* root) /* << Aka begin of function string serialize(TreeNode* root) >> */
{AKA_mark("Calling: .\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\serialize(TreeNode*)");AKA_fCall++;
        
        AKA_mark("lis===63###sois===1456###eois===1472###lif===2###soif===54###eoif===70###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\serialize(TreeNode*)");string res = "";
        
        AKA_mark("lis===65###sois===1492###eois===1507###lif===4###soif===90###eoif===105###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\serialize(TreeNode*)");bfs(root, res);
        AKA_mark("lis===66###sois===1517###eois===1528###lif===5###soif===115###eoif===126###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\serialize(TreeNode*)");return res;
    }

    // Decodes your encoded data to tree.
    /** Instrumented function deserialize(string) */
TreeNode* deserialize(string data) /* << Aka begin of function TreeNode * deserialize(string data) >> */
{AKA_mark("Calling: .\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");AKA_fCall++;
        
        AKA_mark("lis===72###sois===1642###eois===1664###lif===2###soif===56###eoif===78###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");TreeNode* root = NULL;
        
        AKA_mark("lis===74###sois===1684###eois===1706###lif===4###soif===98###eoif===120###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");int n = data.length();
        
        if(AKA_mark("lis===76###sois===1729###eois===1735###lif===6###soif===143###eoif===149###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (AKA_mark("lis===76###sois===1729###eois===1735###lif===6###soif===143###eoif===149###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (n == 0)))                              {
AKA_mark("lis===76###sois===1766###eois===1778###lif===6###soif===180###eoif===192###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");return root;
}

else {
AKA_mark("lis===-76-###sois===-1729-###eois===-17296-###lif===-6-###soif===-###eoif===-149-###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");
}
        
        AKA_mark("lis===78###sois===1798###eois===1820###lif===8###soif===212###eoif===234###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");stringstream ss(data);
        AKA_mark("lis===79###sois===1830###eois===1841###lif===9###soif===244###eoif===255###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");string str;
        
        AKA_mark("lis===81###sois===1861###eois===1883###lif===11###soif===275###eoif===297###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");getline(ss, str, ',');
        AKA_mark("lis===82###sois===1893###eois===1924###lif===12###soif===307###eoif===338###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");root = new TreeNode(stoi(str));
        
        AKA_mark("lis===84###sois===1944###eois===1963###lif===14###soif===358###eoif===377###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");queue<TreeNode*> q;
        AKA_mark("lis===85###sois===1973###eois===1986###lif===15###soif===387###eoif===400###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");q.push(root);
        
        int AKA_BLOCK_LOOP_2006 = 0;
    while(AKA_mark("lis===87###sois===2012###eois===2030###lif===17###soif===426###eoif===444###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (AKA_mark("lis===87###sois===2012###eois===2030###lif===17###soif===426###eoif===444###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (q.empty() == false))) {
        AKA_BLOCK_LOOP_2006++;
        if (AKA_BLOCK_LOOP_2006 > 1000) {
            //break;
        }
            
            AKA_mark("lis===89###sois===2061###eois===2079###lif===19###soif===475###eoif===493###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");int n1 = q.size();
            
            int AKA_BLOCK_LOOP_2107 = 0;
    while(AKA_mark("lis===91###sois===2113###eois===2117###lif===21###soif===527###eoif===531###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (AKA_mark("lis===91###sois===2113###eois===2117###lif===21###soif===527###eoif===531###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (n1--))) {
        AKA_BLOCK_LOOP_2107++;
        if (AKA_BLOCK_LOOP_2107 > 1000) {
            //break;
        }
                
                AKA_mark("lis===93###sois===2156###eois===2183###lif===23###soif===570###eoif===597###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");TreeNode* temp = q.front();
                AKA_mark("lis===94###sois===2201###eois===2209###lif===24###soif===615###eoif===623###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");q.pop();
                
                // For left node of "temp" node
                AKA_mark("lis===97###sois===2294###eois===2316###lif===27###soif===708###eoif===730###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");getline(ss, str, ',');
                
                if(AKA_mark("lis===99###sois===2355###eois===2365###lif===29###soif===769###eoif===779###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (AKA_mark("lis===99###sois===2355###eois===2365###lif===29###soif===769###eoif===779###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (str == "#")))                      {
AKA_mark("lis===99###sois===2388###eois===2406###lif===29###soif===802###eoif===820###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");temp->left = NULL;
}

                
                else {
                    
                    AKA_mark("lis===103###sois===2492###eois===2537###lif===33###soif===906###eoif===951###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");TreeNode* leftNode = new TreeNode(stoi(str));
                    AKA_mark("lis===104###sois===2559###eois===2581###lif===34###soif===973###eoif===995###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");temp->left = leftNode;
                    
                    AKA_mark("lis===106###sois===2625###eois===2642###lif===36###soif===1039###eoif===1056###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");q.push(leftNode);
                }
                
                 // For right node of "temp" node
                AKA_mark("lis===110###sois===2748###eois===2770###lif===40###soif===1162###eoif===1184###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");getline(ss, str, ',');
                
                if(AKA_mark("lis===112###sois===2809###eois===2819###lif===42###soif===1223###eoif===1233###ifc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (AKA_mark("lis===112###sois===2809###eois===2819###lif===42###soif===1223###eoif===1233###isc===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)") && (str == "#")))                      {
AKA_mark("lis===112###sois===2842###eois===2861###lif===42###soif===1256###eoif===1275###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");temp->right = NULL;
}

                
                else {
                    
                    AKA_mark("lis===116###sois===2947###eois===2993###lif===46###soif===1361###eoif===1407###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");TreeNode* rightNode = new TreeNode(stoi(str));
                    AKA_mark("lis===117###sois===3015###eois===3039###lif===47###soif===1429###eoif===1453###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");temp->right = rightNode;
                    
                    AKA_mark("lis===119###sois===3083###eois===3101###lif===49###soif===1497###eoif===1515###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");q.push(rightNode);
                }
            }
        }        
        
        AKA_mark("lis===124###sois===3174###eois===3186###lif===54###soif===1588###eoif===1600###ins===true###function===.\\p5\\0449-serialize-and-deserialize-bst\\0449-serialize-and-deserialize-bst.cpp\\Codec\\deserialize(string)");return root;
    }
    
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
#endif
