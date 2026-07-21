
        /* *****************  STACK  *******************  */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
       int *arr;
       int size;
       int top;
    public:
      /* Constructer */
        Stack(int s){
            size=s;
            arr=new int[size];
            top=-1;
        }
        void push(int val){
            if(top==size-1){
                cout<<"Stack overflow \n";
            }
            else{
                top++;
                arr[top]=val;
            }
        }
        void pop(){
            if(top== -1){
                cout<<"Stack Underflow \n";
            }
            else{
                top--;
            }
        }
        int peek(){
            if(top==-1){
                cout<<"Stack is empty\n";
            }
            else{
                return arr[top];
            }
        }
};

int main(){
      Stack s(5);
      s.push(4);
      s.push(8);
      cout<<s.peek(); 
      s.pop(); 
      cout<<"\nAfter pop \n";
      cout<<s.peek()<<endl; 
      s.push(10);
      s.push(13);
      cout<<s.peek()<<endl; 

return 0 ;
}