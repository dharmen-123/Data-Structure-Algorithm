
/* ****************************************************************** */
            /* Deletion in Singly Linked List */
/* ****************************************************************** */

/* // Delete first Node from Begining of Linked List */

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

        /* Delete a Node from start*/
        if(Head!=NULL){
            Node *temp=Head;
            Head=Head->next;
            delete temp;
        }

     /* Print the linked List */
        Node *temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<"-";
            temp=temp->next;
        }

return 0 ;
}