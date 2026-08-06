
        /* ********* Question on Queue *************  */

    /* Print all the element of Queue */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     queue<int>q;
//     q.push(2);
//     q.push(4);
//     q.push(6);
//     q.push(8);
//     q.push(10);

//     /* print all the element */
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//         /* Queue is empty after print the element */
//      cout<<endl<<q.empty();

// return 0 ;
// }

        /* Print all the element of Queue without remove element from queue  */


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    int n=q.size();
    /* print all the element */
    while(n>0){
        cout<<q.front()<<" ";
        int val=q.front();
        q.pop();
        q.push(val);
        n--;
    }

        /* Queue is not empty after print the element */
    cout<<endl<<q.size();
    
return 0 ;
}

        

