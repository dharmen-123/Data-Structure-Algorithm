
        /* // Vector in 2D Array // */

// #include<iostream>
// #include"vector"
// #include"algorithm"
// using namespace std;

// int main(){
//     vector<vector<int>>matrix(3,vector<int>(4,1));
//     for(auto k:matrix){
//         for(auto v:k){
//             cout<<v<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Number of Rows : "<<matrix.size()<<endl;
//     cout<<"Number of Column : "<<matrix[0].size();

// return 0 ;
// }

        /* // Dynamic size and data of 2D Vector   // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int n , m;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     cout<<"Enter the number of column: ";
//     cin>>m;
//     vector<vector<int>>mat(n,vector<int>(m));
//     cout<<"Enter the values of matrix :"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }    
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<mat[i][j]<<" ";
//         }    
//         cout<<endl;
//     }
// return 0 ;
// }