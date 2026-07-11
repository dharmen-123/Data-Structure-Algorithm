
/* ****************************************************************** */
                /* // Node of Linked List // */
/* ****************************************************************** */

    
    /* Define Node Structure using Struct */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// // Define a Node structure
// struct Node {
//     int data;       // data field
//     Node* next;     // pointer to next node
// };
// int main(){
//     // Create nodes
//     Node* head = new Node();   // first node
//     // Assign data
//     head->data = 10;
//     // Link nodes
//     head->next = NULL; // last node points to NULL

// return 0 ;
// }


    /* Create Static Node Structure  Using class */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//      int data;
//      Node *next;

// };
// int main(){
//         Node *head;
//         head->data=5;
//         head->next=NULL;

// return 0 ;
// }

    /* Create Dynamically Node Structure Using constructor */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    /* Constructor to initialize Node */
    Node(int val){
        data=val;
        next=NULL;
    }

};
int main(){
    Node *head=new Node(15);

return 0 ;
}
