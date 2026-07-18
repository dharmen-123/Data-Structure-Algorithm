
/* ****************************************************************** */
/* Insertion in Doubly Linked List */
/* ****************************************************************** */

        /* Insert a Node at Specific Position of the Doubly Linked List */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
Node* CreateDLL(Node* prev,vector<int>& arr,int index){
        if(index==arr.size()){
            return NULL;
        }
        Node* temp=new Node(arr[index]);
            temp->prev=prev;
            temp->next=CreateDLL(prev,arr,index+1);
        return temp;
}

int main(){
    Node* Head=NULL;
    // vector<int> arr = {2, 4, 6, 7};
    // Head=CreateDLL(Head,arr,0);
    int pos=2;
    if(pos==0){
        /* If linked List does not exist */
        if(Head==NULL){
            Head=new Node(5);
        }
        /* If linked list is exist */
        else{
            Node* temp=new Node(5);
            temp->next=Head;
            Head->prev=temp;
            Head=temp;
        }
    }
    else{
        /* Go to that Node after which we insert the new node */
        Node* curr=Head;
        if(curr!=NULL){
            while(--pos){
                curr=curr->next;
            }
                /* Insert at end */
            if(curr->next==NULL){
                Node* temp=new Node(5);
                temp->prev=curr;
                curr->next=temp;
            }
            /* Insert at Middle */
            else{
                Node* temp=new Node(5);
                temp->next=curr->next;
                temp->prev=curr;
                curr->next=temp;
                temp->next->prev=temp;
            }
        }
        /* If Linked List is empty and position is not zero */
        else{
            Node* temp=new Node(5);
            Head=temp;
        }
        
    }

    Node* temp=Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

return 0 ;
}