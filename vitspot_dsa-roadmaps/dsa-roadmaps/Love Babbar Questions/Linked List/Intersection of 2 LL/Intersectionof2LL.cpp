#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* root;
    Node* next;
};

Node* Intersection(Node* head1,Node* head2){
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* head=NULL;
    Node* curr= NULL;

    while(ptr1 && ptr2){
        if(ptr1->data==ptr2->data){
            if(head==NULL){
                Node* t= new Node(ptr1->data){
                    head=t;
                    curr=t;
                }
            else{
                Node* t= new Node(ptr->data){
                    curr->next=t;
                    curr=curr->next;
                }

                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            else{
                if(ptr1->data<ptr2->data){
                    ptr1=ptr1->next;
                }
                else{
                    ptr2=ptr2->next;
                }
            }
            
        }
    }
    return head;
}

Node* createNode(int data){
    Node* head = new Node(data);
}

int main(){
createNode(1);
createNode(3);
Intersection(head1,head2);
}