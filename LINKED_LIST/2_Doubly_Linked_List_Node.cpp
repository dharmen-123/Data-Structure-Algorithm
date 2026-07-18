
/* ****************************************************************** */
                /* // Node of Doubly Linked List // */
/* ****************************************************************** */

    /* Define the Doubly Liked List Node Structure Static */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//        int data;
//        Node *prev;
//        Node *next;

// };
// int main(){
//     Node* head=new Node();
//     head->data=10;
//     head->prev=NULL;
//     head->next=NULL;
//     cout<<head->prev<<" ";
//     cout<<head->data<<" ";
//     cout<<head->next;
//     return 0 ;
// }

     /* Define the Doubly Liked List Node Structure Dynamically */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
       int data;
       Node *prev;
       Node *next;
        Node(int val){
            data=val;
            prev=NULL;
            next=NULL;
        }
};

int main(){
    Node* head=new Node(5);
    cout<<head->prev<<" ";
    cout<<head->data<<" ";
    cout<<head->next;
    
return 0 ;
}