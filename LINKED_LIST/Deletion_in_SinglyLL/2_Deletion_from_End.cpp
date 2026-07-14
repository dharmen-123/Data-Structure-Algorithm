
/* ****************************************************************** */
            /* Deletion in Singly Linked List */
/* ****************************************************************** */

                    /* // Delete Last Node from End of Linked List 
                            When List contain some nodes    */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//      int data;
//      Node *next;
//         Node(int val){
//             data=val;
//             next=NULL;
//         }
// };
// Node* CreateLL(vector<int>& arr, int index){
//         /* Base condition */    
//         if(index==arr.size()){
//             return NULL;
//         }
//         Node *temp;
//         temp=new Node(arr[index]);
//         temp->next=CreateLL(arr,index+1);       
//      return temp;
// }
// int main(){
//         Node *Head=NULL;
//         vector<int>arr={2,4,6,8,10};
//         Head=CreateLL(arr,0);

//         /* Delete a Node from Last */
//         if(Head!=NULL){          // If List doest not exist
//         Node *curr=Head;
//         Node *prev=NULL;
//         while(curr->next!=NULL){
//             prev=curr;
//             curr=curr->next;
//         }
//         delete curr;
//         prev->next=NULL;
//         }
//      /* Print the linked List */
//         Node *temp=Head;
//         cout<<"|";
//         while(temp!=NULL){
//             cout<<temp->data<<"|";
//             // cout<<temp->next<<"|-->|";
//             temp=temp->next;
//         }

// return 0 ;
// }


                /* // Delete Last Node from End of Linked List 
                        When List contain only Single Node    */

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
        Node *Head=new Node(5); // List contain single Node

        /* Delete a Node from Last */
        if(Head!=NULL){          // If List doest not exist
        Node *curr=Head;
        Node *prev=NULL;
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
           if(Head->next!=NULL){
             prev->next=NULL;
           }
           else{
               Head=prev;
           }
          delete curr;
        }

     /* Print the linked List */
        Node *temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<"|";
            // cout<<temp->next<<"|-->|";
            temp=temp->next;
        }

return 0 ;
}


