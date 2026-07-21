
        /* *****************  STACK  *******************  */


    /* Stack Implementation Using Array */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Stack{
//        int *arr;
//        int size;
//        int top;
//        bool flag;
//     public:
//       /* Constructer */
//         Stack(int s){
//             size=s;
//             arr=new int[size];
//             top=-1;
//             flag=1;
//         }
//         void push(int val){
//             if(top==size-1){
//                 cout<<"Stack overflow \n";
//             }
//             else{
//                 top++;
//                 arr[top]=val;
//                 flag=0;
//                 cout<<"Pushed "<<val<<" into stack"<<endl;
//             }
//         }
//         void pop(){
//             if(top== -1){
//                 cout<<"Stack Underflow \n";
//             }
//             else{
//                 top--;
//                 if(top==-1)
//                   flag=1;  
//             }
//         }
//         int peek(){
//             if(top==-1){
//                 cout<<"Stack is empty\n";
//             }
//             else{
//                 return arr[top];
//             }
//         }
//         bool isempty(){
//             return top==-1;
//         }
// };

// int main(){
//       Stack s(5);
//       s.push(4);
//       s.push(8);
//       cout<<s.peek(); 
//       s.pop(); 
//       cout<<"\nAfter pop \n";
//       cout<<s.peek()<<endl; 
//       s.push(10);
//       s.push(13);
//       cout<<s.peek()<<endl; 
//       cout<<"Stack is "<<s.isempty()<<endl;

// return 0 ;
// }

        /* Stack Implementation Using Linked List */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;    
        }
};
class Stack{
    int size;
    Node* top;
    public:
        Stack(){
            top=NULL;
            size=0;
        }
        void push(int val){
            Node* temp=new Node(val);
            temp->next=top;
            top=temp;
            size++;
            cout<<"Pushed "<<val<<" into the Stack"<<endl;
        }    
        void pop(){
            if(top==NULL){
                cout<<"Stack is underflow"<<endl;
            }
            else{
                Node *temp=top;
                cout<<"\nPopped "<<top->data<<" from the stack"<<endl;
                top=top->next;
                delete temp;
                size--;
            }
        }
        int peek(){
            if(top==NULL){
                cout<<"Stack is Empty"<<endl;
                return -1;
            }
            else
               cout<<"\nTop element is :"; 
               return top->data;
        }
        int issize(){
            cout<<"\nSize of : ";
            return size;
        }

};
int main(){
      Stack s;
      s.push(5);  
      s.push(3);  
      s.push(2);
     cout<<s.peek();
     cout<<s.issize();  
     s.pop();
     cout<<s.peek();
     
return 0 ;
}