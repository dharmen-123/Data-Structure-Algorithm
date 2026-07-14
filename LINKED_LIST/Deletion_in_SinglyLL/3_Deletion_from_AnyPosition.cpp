/* ****************************************************************** */
            /* Deletion in Singly Linked List */
/* ****************************************************************** */

            /* Delete the Node at Specific Position */

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

//         /* Delete a Node from Given Position */
//         int pos=3 ;
//         if(Head!=NULL){          // If List doest not exist
//         Node *curr=Head;
//             if(pos>1){
//                 Node *prev=NULL;
//                 while(--pos){
//                     prev=curr;
//                     curr=curr->next;
//                 }
//                 prev->next=curr->next;
//                 delete curr;
//             }
//             else{           // Delete the first Node from the List
//                 Head=curr->next;
//                 delete curr;
//             } 
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

        /* Delete the Given Node without Head pointer */
        
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
void deleteNode(Node* del_node) {
        Node *temp=del_node->next;
        del_node->data=temp->data;
        del_node->next=temp->next;
        delete temp;
    }
int main(){
        Node *Head=new Node(10);
        Node *n2=new Node(20);
        Node *n3=new Node(4);
        Node *n4=new Node(30);
        Head->next=n2;
        n2->next=n3;
        n3->next=n4;
        deleteNode(n2);

         /* Print the linked List */
        Node *temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    return 0;
}