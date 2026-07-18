/* ****************************************************************** */
            /* Deletion in Doubly Linked List */
/* ****************************************************************** */

    /* Delete a Node from the Beginning of the Doubly Linked List  */

#include <iostream>
#include <bits/stdc++.h>
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

int main()
{
    Node* Head = NULL;
    vector<int> arr = {2, 4, 6, 7};
    Head=CreateDLL(Head,arr,0);

    if(Head!=NULL){
        Node* temp=Head;
        Head=Head->next;
        delete temp;
        if(Head){
            Head->prev=NULL;
        }
    }

    Node* temp=Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

