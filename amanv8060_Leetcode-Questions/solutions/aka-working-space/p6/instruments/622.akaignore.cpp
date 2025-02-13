/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_622_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_622_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue {
 public:
public:
  int front = 0, rear = -1;
  int size;
  int max_size;
  vector<int> vec;

  /** Instrumented function MyCircularQueue(int) */
MyCircularQueue(int k) /* << Aka begin of function  MyCircularQueue(int k) >> */
{AKA_mark("Calling: .\\p6\\622.cpp\\MyCircularQueue\\MyCircularQueue(int)");AKA_fCall++;
    AKA_mark("lis===19###sois===337###eois===347###lif===1###soif===30###eoif===40###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\MyCircularQueue(int)");front = 0;
    AKA_mark("lis===20###sois===353###eois===363###lif===2###soif===46###eoif===56###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\MyCircularQueue(int)");rear = -1;
    AKA_mark("lis===21###sois===369###eois===383###lif===3###soif===62###eoif===76###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\MyCircularQueue(int)");vec.resize(k);
    AKA_mark("lis===22###sois===389###eois===398###lif===4###soif===82###eoif===91###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\MyCircularQueue(int)");size = 0;
    AKA_mark("lis===23###sois===404###eois===417###lif===5###soif===97###eoif===110###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\MyCircularQueue(int)");max_size = k;
  }

  /** Instrumented function enQueue(int) */
bool enQueue(int value) /* << Aka begin of function bool enQueue(int value) >> */
{AKA_mark("Calling: .\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)");AKA_fCall++;
    if (AKA_mark("lis===27###sois===463###eois===479###lif===1###soif===35###eoif===51###ifc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)") && (AKA_mark("lis===27###sois===463###eois===479###lif===1###soif===35###eoif===51###isc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)") && (isFull() == true))) {
      AKA_mark("lis===28###sois===490###eois===503###lif===2###soif===62###eoif===75###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)");return false;
    }
else {
AKA_mark("lis===-27-###sois===-463-###eois===-46316-###lif===-1-###soif===-###eoif===-51-###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)");
}
    AKA_mark("lis===30###sois===516###eois===545###lif===4###soif===88###eoif===117###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)");rear = (rear + 1) % max_size;
    AKA_mark("lis===31###sois===551###eois===569###lif===5###soif===123###eoif===141###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)");vec[rear] = value;
    AKA_mark("lis===32###sois===575###eois===582###lif===6###soif===147###eoif===154###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)");size++;
    AKA_mark("lis===33###sois===588###eois===600###lif===7###soif===160###eoif===172###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\enQueue(int)");return true;
  }

  /** Instrumented function deQueue() */
bool deQueue() /* << Aka begin of function bool deQueue() >> */
{AKA_mark("Calling: .\\p6\\622.cpp\\MyCircularQueue\\deQueue()");AKA_fCall++;
    if (AKA_mark("lis===37###sois===637###eois===654###lif===1###soif===26###eoif===43###ifc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\deQueue()") && (AKA_mark("lis===37###sois===637###eois===654###lif===1###soif===26###eoif===43###isc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\deQueue()") && (isEmpty() == true))) {
      AKA_mark("lis===38###sois===665###eois===678###lif===2###soif===54###eoif===67###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\deQueue()");return false;
    }
else {
AKA_mark("lis===-37-###sois===-637-###eois===-63717-###lif===-1-###soif===-###eoif===-43-###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\deQueue()");
}
    AKA_mark("lis===40###sois===691###eois===722###lif===4###soif===80###eoif===111###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\deQueue()");front = (front + 1) % max_size;
    AKA_mark("lis===41###sois===728###eois===735###lif===5###soif===117###eoif===124###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\deQueue()");size--;
    AKA_mark("lis===42###sois===741###eois===753###lif===6###soif===130###eoif===142###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\deQueue()");return true;
  }

  /** Instrumented function Front() */
int Front() /* << Aka begin of function int Front() >> */
{AKA_mark("Calling: .\\p6\\622.cpp\\MyCircularQueue\\Front()");AKA_fCall++;
    if (AKA_mark("lis===46###sois===787###eois===804###lif===1###soif===23###eoif===40###ifc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Front()") && (AKA_mark("lis===46###sois===787###eois===804###lif===1###soif===23###eoif===40###isc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Front()") && (isEmpty() == true))) {
      AKA_mark("lis===47###sois===815###eois===825###lif===2###soif===51###eoif===61###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Front()");return -1;
    }
else {
AKA_mark("lis===-46-###sois===-787-###eois===-78717-###lif===-1-###soif===-###eoif===-40-###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Front()");
}
    AKA_mark("lis===49###sois===838###eois===856###lif===4###soif===74###eoif===92###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Front()");return vec[front];
  }

  /** Instrumented function Rear() */
int Rear() /* << Aka begin of function int Rear() >> */
{AKA_mark("Calling: .\\p6\\622.cpp\\MyCircularQueue\\Rear()");AKA_fCall++;
    if (AKA_mark("lis===53###sois===889###eois===906###lif===1###soif===22###eoif===39###ifc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Rear()") && (AKA_mark("lis===53###sois===889###eois===906###lif===1###soif===22###eoif===39###isc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Rear()") && (isEmpty() == true))) {
      AKA_mark("lis===54###sois===917###eois===927###lif===2###soif===50###eoif===60###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Rear()");return -1;
    }
else {
AKA_mark("lis===-53-###sois===-889-###eois===-88917-###lif===-1-###soif===-###eoif===-39-###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Rear()");
}
    AKA_mark("lis===56###sois===940###eois===957###lif===4###soif===73###eoif===90###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\Rear()");return vec[rear];
  }

  /** Instrumented function isEmpty() */
bool isEmpty() /* << Aka begin of function bool isEmpty() >> */
{AKA_mark("Calling: .\\p6\\622.cpp\\MyCircularQueue\\isEmpty()");AKA_fCall++;
    if (AKA_mark("lis===60###sois===994###eois===1003###lif===1###soif===26###eoif===35###ifc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isEmpty()") && (AKA_mark("lis===60###sois===994###eois===1003###lif===1###soif===26###eoif===35###isc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isEmpty()") && (size == 0))) {
      AKA_mark("lis===61###sois===1014###eois===1026###lif===2###soif===46###eoif===58###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isEmpty()");return true;
    }
else {
AKA_mark("lis===-60-###sois===-994-###eois===-9949-###lif===-1-###soif===-###eoif===-35-###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isEmpty()");
}
    AKA_mark("lis===63###sois===1039###eois===1052###lif===4###soif===71###eoif===84###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isEmpty()");return false;
  }

  /** Instrumented function isFull() */
bool isFull() /* << Aka begin of function bool isFull() >> */
{AKA_mark("Calling: .\\p6\\622.cpp\\MyCircularQueue\\isFull()");AKA_fCall++;
    if (AKA_mark("lis===67###sois===1088###eois===1104###lif===1###soif===25###eoif===41###ifc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isFull()") && (AKA_mark("lis===67###sois===1088###eois===1104###lif===1###soif===25###eoif===41###isc===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isFull()") && (size == max_size))) {
      AKA_mark("lis===68###sois===1115###eois===1127###lif===2###soif===52###eoif===64###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isFull()");return true;
    }
else {
AKA_mark("lis===-67-###sois===-1088-###eois===-108816-###lif===-1-###soif===-###eoif===-41-###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isFull()");
}
    AKA_mark("lis===70###sois===1140###eois===1153###lif===4###soif===77###eoif===90###ins===true###function===.\\p6\\622.cpp\\MyCircularQueue\\isFull()");return false;
  }
};

#endif
