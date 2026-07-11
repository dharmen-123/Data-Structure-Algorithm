
/* ****************************************************************** */
            /* Insertion in Singly Linked List */
/* ****************************************************************** */

/* // Insertion at the begining of Linked List When List is Empty // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//      int data;
//      Node *next;
//        Node(int val){
//            data=val;
//            next=NULL;
//          }
// };
// int main(){
//     /* When Linked list is empty */
//     Node *head;
//     head=NULL;
//     vector<int>arr={2,4,6,8};
//     for(int i=0;i<arr.size();i++){
//         /* Linked List doesnt exist any element */
//         if(head==NULL){
//             head=new Node(arr[i]);
//         }
//         /* Linked list exist some elements */
//         else{
//             Node *temp=new Node(arr[i]);
//             temp->next=head;
//             head=temp;
//         }
//     }
//         /* Print the linked List */
//         Node *temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }

/* // Insertion at the begining of Linked List When List is not Empty // */

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
    /* When Linked List is not empty */
    Node *head=new Node(6);
    Node *second=new Node(12);
    head->next=second;
    Node *third=new Node(14);
    second->next=third;
    third->next=NULL;

    vector<int>arr={2,4};
    for(int i=0;i<arr.size();i++){
        /* Linked List doesnt exist any element */
        if(head==NULL){
            head=new Node(arr[i]);
        }
        /* Linked list exist some elements */
        else{
            Node *temp=new Node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
        /* Print the linked List */
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
return 0 ;
}

