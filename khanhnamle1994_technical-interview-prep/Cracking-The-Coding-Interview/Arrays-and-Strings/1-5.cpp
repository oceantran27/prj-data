#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// Write a method to replace all spaces in a string with '%20'

/* Algorithm:
1 - Count the number of spaces during the first scan of the string.
2 - Parse the string again from the end and for each character.
+ If a space is encountered, store "%20".
+ Else, store the character as it is in the newly shifted location.
*/

#include <iostream>
#include <cstring>
using namespace std;

char* replace1(char *c) {
  if(c == NULL) return NULL;
  int len = strlen(c);
  if(len == 0) return NULL;
  int cnt = 0;
  for(int i = 0; i < len; i++)
  {
    if(c[i] == ' ')
      cnt++;
  }
  char *cc = new char[len + 2 * cnt + 1];
  int p = 0;
  for(int i = 0; i < len; i++)
  {
    if(c[i] == ' ')
    {
      cc[p] = '%';
      cc[p+1] = '2';
      cc[p+2] = '0';
      p += 3;
    }
    else
    {
      cc[p] = c[i];
      p++;
    }
  }
  cc[p] = '\0';
  return cc;
}

void replace2(char *c) {
  if(c == NULL) return;
  int len = strlen(c);
  if(len == 0) return;
  int cnt = 0;
  for(int i = 0; i < len; i++)
  {
    if(c[i] == ' ')
      cnt++;
  }
  int p = len + 2 * cnt;
  c[p--] = '\0';
  for(int i = len - 1; i >= 0; i--)
  {
    if(c[i] == ' ')
    {
      c[p] = '0';
      c[p+1] = '2';
      c[p+2] = '%';
      p -= 3;
    }
    else
    {
      c[p] = c[i];
      p--;
    }
  }
}

int main() {
  const int len = 100;
  char c[len] = "";
  cout << replace1(c) << endl;
  replace2(c);
  cout << c << endl;
  return 0;
}
