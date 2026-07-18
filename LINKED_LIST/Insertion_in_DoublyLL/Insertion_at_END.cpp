
/* ****************************************************************** */
/* Insertion in Doubly Linked List */
/* ****************************************************************** */

/* Insertion a single Node at the End of Doubly Linked List
        When List is Empty */

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
//     /* Insert a Single Node at END */
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

        /* Insertion a single Node at the End of Doubly Linked List
                    When List is NOT Empty          */

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
//     Node* Tail=n2;
//     /* Insert a Single Node at END */
//     Node* temp=new Node(5);
//     if(Head==NULL){
//         Head=temp;
//     }
//     else{
//         Tail->next=temp;
//         temp->prev=Tail;
//         Tail=temp;
//     }

//     temp=Head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

// return 0 ;
// }

        /* Insert Multiple Nodes at the End of Double Linked List
                    When is Empty or Not Empty            */

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
    // Node* Head = NULL;
    Node *Head = new Node(4);
    Node *n2 = new Node(8);
    Head->next = n2;
    n2->prev = Head;

    /* Insert Multiple Node at END */
    vector<int> arr = {2, 4, 6, 7};
    Node* Tail = Head;
    if(Tail!=NULL){
        while(Tail->next!=NULL){
            Tail=Tail->next;
    }
    }
    for(int i=0;i<arr.size();i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
            Tail=Head;
        }
        else{
            Node* temp=new Node(arr[i]);
            Tail->next=temp;
            temp->prev=Tail;
            Tail=temp;
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