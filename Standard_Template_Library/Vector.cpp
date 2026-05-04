
        // VECTOR Implementation //

        //  Vector Declaration   //

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={2,3,4,8,1};  // declare the vector 
//     for(int j=0;j<v.size();j++){
//         cout<<v[j]<<" ";
//     }
//     cout<<endl;
//     vector<int>arr(4,0);   // Assign single value in vector 
//     for(int i=0;i<4;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0 ;
// }


        // Insertion and Deletion in Vector    //
    
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>v={2,3,4,5};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//      // // Insertion in Vector using push_back()    //
    
//     v.push_back(9);
//     v.push_back(10);
//     cout<<endl<<"after Insert the value from back :\n";
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

//      // Deletion in Vector using pop_back()    //

//      v.pop_back();
//      v.pop_back();
//      cout<<endl<<"after delete the value from back :\n";
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

//     // Delete the value from vector using erase //

//     v.erase(v.begin()+2);
//     cout<<endl<<"After erase the value:\n";
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

//     // Remove the values from Vector using clear()    //

//     v.clear();
//     cout<<endl<<"vector is empty :";
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// return 0 ;
// }

        // SIZE and CAPACITY //

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//         vector<int>v={13,4,35};
//         for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//         }
//         cout<<"\nSize of vector : "<<v.size();
//         cout<<"\nCapacity of vector : "<<v.capacity();

//         v.push_back(98);
//         cout<<"\nAfter insert the value from back";
//         cout<<"\nSize of vector : "<<v.size();
//         cout<<"\nCapacity of vector : "<<v.capacity();

//         v.pop_back();
//         v.pop_back();
//         cout<<"\nAfter remove the value from back";
//         cout<<"\nSize of vector : "<<v.size();
//         cout<<"\nCapacity of vector : "<<v.capacity();

// return 0 ;
// }

        // // Accessing values using FRONT , BACK , AT , EMPTY //

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//       vector<int>v={13,4,35,78,10};
//       for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//         }
//       cout<<endl<<"Access front element using front() :\n";
//       cout<<v.front()<<endl;
//       cout<<"Access back element using back() :\n";
//       cout<<v.back()<<endl;
//       cout<<"Check vector is empty or not using empty() :\n";
//       if(v.empty())
//         cout<<"Vector is empty";
//       else 
//         cout<<"Vector is not empty";
// return 0 ;
// }

        // ITERATOR in Vector //

#include<iostream>
#include<vector>
using namespace std;

int main(){
        vector<int>v={13,4,35,78,10};
        for(int i=0;i<v.size();i++){
          cout<<v.at(i)<<" ";
          } 
          

return 0 ;
}
// oos.flush();
// oos.close();
// fos.close();
// #fit random forest nodel
// int arr[]= {1,2,7,12,9 };
// int even=0;
// int length = sizeof(arr)/sizeof(arr[0])
// cout<<"Even numbers <<even<<endl;
// def calculate (operator, number1, number2):