
           /* ****************  QUEUE  ****************  */

// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;

//     // 1. Enqueue elements
//     q.push(10); // queue: [10]
//     q.push(20); // queue: [10, 20]
//     q.push(30); // queue: [10, 20, 30]

//     // 2. Access front and rear
//     cout << "Front element: " << q.front() << endl; // 10
//     cout << "Rear element: " << q.back() << endl;   // 30

//     // 3. Size of queue
//     cout << "Size: " << q.size() << endl; // 3

//     // 4. Dequeue element
//     q.pop(); // removes 10 → queue: [20, 30]
//     cout << "Front after pop: " << q.front() << endl; // 20

//     // 5. Check if empty
//     if(q.empty())
//         cout << "Queue is empty" << endl;
//     else
//         cout << "Queue is not empty" << endl;
//     return 0;
// }


        /* Queue Implementation Using Array */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Queue{
//     int *arr;
//     int front, rear;
//     int size;
//     public:
//         Queue(int n){
//             arr=new int[n];
//             front = -1 , rear = -1;
//             size=n;
//         }
//      void push(int val){
//         if(Isempty()){
//             front=rear=0;
//             arr[rear]=val;
//         }
//         else if(Isfull()){
//             cout<<"Queue is Overflow"<<endl;
//             return ;
//         }
//         else{
//             rear+=1;
//             arr[rear]=val;
//             cout<<val<<" is insert in queue"<<endl;
//         }
//      } 
//      void pop(){
//         if(Isempty()){
//             cout<<"Queue Underflow"<<endl;
//             return ;
//         }
//         else{
//             if(front==rear){
//                 front=rear=-1;
//             }
//             else{
//             cout<<arr[front]<<" is removed from queue"<<endl;
//             front+=1;
//             }
//         }
//      }
//      int start(){
//         if(Isempty()){
//             cout<<"Queue is Empty"<<endl;
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//      }
//      bool Isfull(){
//         return rear==size-1;
//      }
//      bool Isempty(){
//         return front==-1;
//      }

// };
// int main(){
//         Queue q(5);
//         q.push(10);
//         q.push(8);
//         q.push(23);
//         q.pop();
//         cout<<q.Isfull()<<endl;
//         cout<<q.start()<<endl;

// return 0 ;
// }

        /* Circular Queue Implementation using with Array*/

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Queue{
//     int *arr;
//     int front, rear;
//     int size;
//     public:
//         Queue(int n){
//             arr=new int[n];
//             front = -1 , rear = -1;
//             size=n;
//         }
//      void push(int val){
//         if(Isempty()){
//             front=rear=0;
//             arr[rear]=val;
//         }
//         else if(Isfull()){
//             cout<<"Queue is Overflow"<<endl;
//             return ;
//         }
//         else{
//             rear=(rear+1)%size;
//             arr[rear]=val;
//             cout<<val<<" is insert in queue"<<endl;
//         }
//      } 
//      void pop(){
//         if(Isempty()){
//             cout<<"Queue Underflow"<<endl;
//             return ;
//         }
//         else{
//             if(front==rear){
//                 front=rear=-1;
//             }
//             else{
//             cout<<arr[front]<<" is removed from queue"<<endl;
//             front=(front+1)%size;
//             }
//         }
//      }
//      int start(){
//         if(Isempty()){
//             cout<<"Queue is Empty"<<endl;
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//      }
//      bool Isfull(){
//         return (rear+1)%size==front;
//      }
//      bool Isempty(){
//         return front==-1;
//      }

// };
// int main(){
//         Queue q(5);
//         q.push(10);
//         q.push(8);
//         q.push(23);
//         q.pop();
//         cout<<q.Isfull()<<endl;
//         cout<<q.start()<<endl;
//         q.push(65);
//         q.pop();
//         q.push(76);
//         q.push(3);
//         q.push(5);
//         cout<<q.Isfull()<<endl;

// return 0 ;
// }


        /* Queue Implementation using with Linked List */

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
class Queue{
    Node *front;
    Node *rear;
    public:
        Queue(){
            front=rear=NULL;
        }
        bool Isempty(){
            return front==NULL;
        }
        void push(int x){
            if(Isempty()){
                cout<<"Pushed "<<x<<" into queue"<<endl;
                front=new Node(x);
                rear=front;
            }
            else{
                rear->next=new Node(x);
                rear=rear->next;
                cout<<"Pushed "<<x<<" into queue"<<endl;
            }
        }
        void pop(){
            if(Isempty()){
                cout<<"Queue is Underflow"<<endl;
                return ;
            }
            else{
                Node *temp=front;
                cout<<"Poped "<<front->data<<" from queue"<<endl;
                front=front->next;
                delete temp;
            }
        }
        int start(){
            if(Isempty()){
                cout<<"Queue is Underflow"<<endl;
                return -1;
            }
            else{
                return front->data;
            }
        }
};
int main(){
        Queue q;
        q.push(12);
        q.push(4);
        q.push(2);
        q.push(5);
        q.pop();
        cout<<q.Isempty()<<endl;

return 0 ;
}