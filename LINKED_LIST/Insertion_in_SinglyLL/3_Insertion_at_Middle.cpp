
/* ****************************************************************** */
            /* Insertion in Singly Linked List */
/* ****************************************************************** */

/* // Insertion at the Particular Position  of Linked List  // */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
      Node(int val){
        data=val;
        next=NULL;
      }
};
Node* CreateLL(vector<int>& arr, int index){
        /* Base condition */    
        if(index==arr.size()){
            return NULL;
        }
        Node *temp;
        temp=new Node(arr[index]);
        temp->next=CreateLL(arr,index+1);
  
        return temp;
}

int main(){
        Node *Head=NULL;
        vector<int>arr={2,4,6,8,10};
        Head=CreateLL(arr,0);

        /* Insert Node at Particular position */
        int pos=3,val=7;
        
        Node *temp1=Head;
        pos--;
        while(pos--){
            temp1=temp1->next;
        }
        Node *temp2=new Node(val);
        temp2->next=temp1->next;
        temp1->next=temp2;

        /* Print the list */
        Node *temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
return 0 ;
}