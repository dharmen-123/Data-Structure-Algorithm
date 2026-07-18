
/* ****************************************************************** */
/* Insertion in Doubly Linked List */
/* ****************************************************************** */

/* // Insertion a Single Node at the begining of Linked List
             When List is Empty // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//        int data;
//        Node *prev;
//        Node *next;
//         Node(int val){
//             data=val;
//             prev=NULL;
//             next=NULL;
//         }
// };

// int main(){
//     Node* Head=NULL;
//     /* Insert a Single Node at start */
//     Node* temp=new Node(5);
//     if(Head==NULL){
//         Head=temp;
//     }

//     temp=Head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

// return 0 ;
// }

/* // Insertion a Single Node at the begining of Linked List
        When List is NOT  Empty // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//        int data;
//        Node *prev;
//        Node *next;
//         Node(int val){
//             data=val;
//             prev=NULL;
//             next=NULL;
//         }
// };

// int main(){
//     Node* Head=new Node(4);
//     Node* n2=new Node(8);
//     Head->next=n2;
//     n2->prev=Head;
//     /* Insert a Single Node at start */
//     Node* temp=new Node(6);
//     if(Head==NULL){
//         Head=temp;
//     }
//     else{
//         temp->next=Head;
//         Head->prev=temp;
//         Head=temp;

//     }

//     temp=Head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

// return 0 ;
// }

/* // Insert Multiple Nodes at the beginning of Doubly Linked List
        When List is Empty or Not Empty  // */

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

int main()
{
    Node *Head = new Node(3);
    Node *n2 = new Node(8);
    Head->next = n2;
    n2->prev = Head;
    /* Insert Multiple Node at start of DLL */
    vector<int> arr = {2, 4, 6, 7};
    Node *curr = Head;
    for (int i = 0; i < arr.size(); i++)
    {
        /* If list is empty */
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            curr = Head;
        }
        /* If list is NOT empty */
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = curr;
            curr->prev = temp;
            curr = temp;
        }
    }
    Head = curr;
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
