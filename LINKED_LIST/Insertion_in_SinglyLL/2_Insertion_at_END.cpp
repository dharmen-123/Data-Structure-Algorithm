/* ****************************************************************** */
            /* Insertion in Singly Linked List */
/* ****************************************************************** */

/* // Insertion at the End of the Linked List // */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node *next;

     Node(int val){
        data=val;
        next=NULL;
     }
};
int main(){
        Node *Head=NULL;
        Node *Tail=NULL;

        vector<int>arr={3,5,8};
        for(int i=0;i<arr.size();i++){
             /* Linked List is empty */
             if(Head==NULL){
                Head=new Node(arr[i]);
                Tail=Head;
             }
             /* Linked List consist some node */
             else{
                 Tail->next=new Node(arr[i]);
                 Tail=Tail->next;
             }
        }
        /* Print the linked List */
        Node *temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
return 0 ;
}

