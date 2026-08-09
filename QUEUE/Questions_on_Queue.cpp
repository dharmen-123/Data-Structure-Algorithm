
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
//     int n=q.size();
//     /* print all the element */
//     while(n--){
//         cout<<q.front()<<" ";
//         int val=q.front();
//         q.pop();
//         q.push(val);
//     }

//         /* Queue is not empty after print the element */
//     cout<<endl<<q.size();

// return 0 ;
// }

            /* Reverse the Queue Elemenets using Stack  */

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
    
//     stack<int>s;
//     /* Insert the element into stack */
//     while(!q.empty()){
//         s.push(q.front());
//         cout<<q.front()<<" ";
//         q.pop();
//     }

//     /* Pop elemenet from stack and insert into queue */
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }

//     cout<<"\nAfter the reverse the Queue element"<<endl;
//     int n=q.size();
//     /* print all the element */
//     while(n--){
//         cout<<q.front()<<" ";
//         int val=q.front();
//         q.pop();
//         q.push(val);
//     }

// return 0 ;
// }

            /* Print all number in every window size k */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> storewindow(queue<int>q){
    vector<int>ans;
    while(!q.empty()){
        ans.push_back(q.front());
        q.pop();
    }
    return ans;
}
vector<vector<int>> PrintNumberinwindow(vector<int>&arr,int k){
       queue<int>q;
       vector<int>a;
       vector<vector<int>>ans;
       for(int i=0;i<k-1;i++){
           q.push(arr[i]);
       }
       for(int i=k-1;i<arr.size();i++){
          q.push(arr[i]);
          a=storewindow(q);
          ans.push_back(a);
          a.clear();  
          q.pop();
       }
       return ans;
} 
int main(){
        vector<int>arr={3,6,2,7,8,11};
        int k=3;
        vector<vector<int>>ans=PrintNumberinwindow(arr,k);
        for(auto k:ans){
            for(auto a:k){
                cout<<a<<" ";
            }
            cout<<endl;
        }
return 0 ;
}