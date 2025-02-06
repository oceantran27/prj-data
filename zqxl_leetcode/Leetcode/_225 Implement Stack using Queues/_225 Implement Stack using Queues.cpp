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
#include<malloc.h>
#include<string>
#include<math.h>

/*һнṹ*/
typedef struct
{
	int* data;
	int front;
	int rear;
}Myqueue;

/*еĳʼ*/
void initqueue(Myqueue* q, int maxSize)
{
	q->data = (int*)malloc(sizeof(int) * maxSize);
	q->front = 0;
	q->rear = 0;
}

/**/
void Enqueue(Myqueue* q, int x)
{
	q->data[q->rear++] = x;
}

/**/
int Dequeue(Myqueue* q)
{
	return q->data[q->front++];
}

/*Ϊգ1ǿշ0*/
int is_queue_empty(Myqueue* q)
{
	return q->rear == q->front ? 1 : 0;
}

/*صеλ*/
void queuetop(Myqueue* q)
{
	q->front = 0;
	q->rear = 0;
}

/*һջĽṹжq1ջ q2ջ*/
typedef struct
{
	Myqueue* q1;
	Myqueue* q2;
} MyStack;

/** Initialize your data structure here. */
/*ʼջ*/
MyStack* myStackCreate(int maxSize)
{
	MyStack* stack = (MyStack*)malloc(sizeof(MyStack));
	stack->q1 = (Myqueue*)malloc(sizeof(Myqueue));
	initqueue(stack->q1, maxSize);
	stack->q2 = (Myqueue*)malloc(sizeof(Myqueue));
	initqueue(stack->q2, maxSize);
	return stack;
}

/** Push element x onto stack. */
/*ԪxջУǶq1Ĺ*/
void myStackPush(MyStack* obj, int x)
{
	Enqueue(obj->q1, x);
}

/** Removes the element on top of the stack and returns that element. */
/*ȰѶq1гһԪȫԪضq2УȻq1еĽʣһԪطأջ
ȳԭˣٰѶq2еԪȫֲظq1Ķq2ʵ͸תѣֱؿյģͳʼ״̬һ*/
int myStackPop(MyStack* obj)
{
	int tmp;
	if (is_queue_empty(obj->q1)) //ȾҪжq1ǷΪգq1ǸջģȻջҲݣջȫˣǻpop
	{
		return 0;
	}
	else
	{
		while (obj->q1->front != obj->q1->rear - 1) //q1һԪأȫq2.
		{
			Enqueue(obj->q2, Dequeue(obj->q1));
		}
		tmp = Dequeue(obj->q1); //q1һԪظtmp
		queuetop(obj->q1);      //q1ص
		while (!is_queue_empty(obj->q2)) //q2еȫԪֻq1
		{
			Enqueue(obj->q1, Dequeue(obj->q2));
		}
	}
	return tmp;
}

/** Get the top element. */
/*صջĶʵǻصq1ΪջĲȫq1*/
int myStackTop(MyStack* obj)
{
	return obj->q1->data[obj->q1->rear - 1];
}

/** Returns whether the stack is empty. */
/*ǲǿգq1ˣΪq1ջ*/
bool myStackEmpty(MyStack* obj)
{
	return is_queue_empty(obj->q1);
}

void myStackFree(MyStack* obj)
{
	free(obj->q1->data);
	free(obj->q1);
	free(obj->q2->data);
	free(obj->q2);
	free(obj);
}

