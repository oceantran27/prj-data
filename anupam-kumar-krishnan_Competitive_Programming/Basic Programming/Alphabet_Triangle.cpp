#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<stdio.h>    
#include<stdlib.h>  
int main(){  
  int ch=65;    
    int i,j,k,m;    
  system("cls");  
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            printf(" ");    
        for(k=1;k<=i;k++)    
            printf("%c",ch++);    
            ch--;    
        for(m=1;m<i;m++)    
            printf("%c",--ch);    
        printf("\n");    
        ch=65;    
    }    
return 0;  
}  
