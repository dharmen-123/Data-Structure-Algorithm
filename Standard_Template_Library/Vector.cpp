
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

//      // // Insertion in Vector using insert()    //

//     v.insert(v.begin()+3,29);
//     cout<<endl<<"after Insert the value using insert() :\n";
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

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//         vector<int>v={13,4,35,78,10};
//         for(int i=0;i<v.size();i++){
//           cout<<v.at(i)<<" ";
//           } 
//         cout<<endl<<"ITERATER"<<endl;
//         for(auto it=v.begin();it!=v.end();it++){
//                 cout<<*it<<" ";
//         } 

//         // Reverse vector using rbegin and rend

//         cout<<endl<<"Reverse ITERATER"<<endl;
//         for(auto it=v.rbegin();it!=v.rend();it++){
//                 cout<<*it<<" ";
//         } 
// return 0 ;
// }


        // //  SORTING in Vector  // //

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main(){
//         vector<int>v={13,4,35,78,10};
//         for(int i=0;i<v.size();i++){
//               cout<<v[i]<<" ";
//         }   
//        /* // // After Sorting // */
       
//        sort(v.begin(),v.end());
//        cout<<endl<<"After Sorting"<<endl;
//         for(int i=0;i<v.size();i++){
//               cout<<v[i]<<" ";
//         } 

//        /* // //  Sorting in desending Order // */

//        sort(v.begin(),v.end(),greater<int>());
//        cout<<endl<<"Sorting in desending Order"<<endl;
//         for(int i=0;i<v.size();i++){
//               cout<<v[i]<<" ";
//         }
// return 0 ;
// }

        /*  // // Searching in vector // //  */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
        vector<int>vnew;
        vnew.push_back(34);
        vnew.push_back(64);
        vnew.push_back(78);
        vnew.push_back(3);
        vnew.push_back(54);
        cout<<binary_search(vnew.begin(),vnew.end(),78)<<endl;
        cout<<find(vnew.begin(),vnew.end(),3)-vnew.begin()<<endl;
        
return 0 ;
}