/* ****************************************************************** */
            /* Insertion in Singly Linked List */
/* ****************************************************************** */

/* // Insertion at the End of the Linked List 
                    When List is empty              // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//      int data;
//      Node *next;

//      Node(int val){
//         data=val;
//         next=NULL;
//      }
// };
// int main(){
//         Node *Head=NULL;
//         Node *Tail=NULL;

//         vector<int>arr={3,5,8};
//         for(int i=0;i<arr.size();i++){
//              /* Linked List is empty */
//              if(Head==NULL){
//                 Head=new Node(arr[i]);
//                 Tail=Head;
//              }
//              /* Linked List consist some node */
//              else{
//                  Tail->next=new Node(arr[i]);
//                  Tail=Tail->next;
//              }
//         }
//         /* Print the linked List */
//         Node *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
// return 0 ;
// }


/* // Insertion at the End of the Linked List 
            When List is NOT empty          // */

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
        Node *Head=new Node(10);
        Node *node2=new Node(7);
        Node *node3=new Node(5);
        Head->next=node2;
        node2->next=node3;
        node3->next=NULL;
        Node *Tail=node3;

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

