    // // // Square Pattern // // //

 // //   * * * * *   
 // //   * * * * *       
 // //   * * * * *   
 // //   * * * * *       
 // //   * * * * *       

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

 // /// // ///Dynamic Square pattern 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char sym;
//     cout<<"Enter the number of rows and column od square : ";
//     cin>>n;
//     cout<<"Type any symbol for square pattern :";
//     cin>>sym;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//           cout<<" "<<sym<<" ";
//         }    
//         cout<<endl;
//     }
// }

// ********* Number pattern in row wise *************** //
// // //   1 1 1 1 1 
// // //   2 2 2 2 2
// // //   3 3 3 3 3
// // //   4 4 4 4 4
// // //   5 5 5 5 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the last number for pattern from 1 to n :";
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for (int c=1;c<=n;c++){
//              cout<<" "<<r<<" ";
//         }
//         cout<<endl;
//       }
// }

// ********* Number pattern in column wise *************** //
// // //  1  2  3  4  5 
// // //  1  2  3  4  5 
// // //  1  2  3  4  5 
// // //  1  2  3  4  5 
// // //  1  2  3  4  5 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the last number for pattern from 1 to n :";
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for (int c=1;c<=n;c++){
//              cout<<" "<<c<<" ";
//         }
//         cout<<endl;
//       }
// }

// ************* Reverse NUmber pattern ************ 
// // //      5  4  3  2  1 
// // //      5  4  3  2  1 
// // //      5  4  3  2  1 
// // //      5  4  3  2  1 
// // //      5  4  3  2  1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the first number for pattern from n to 1 :";
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for (int c=n;c>=1;c--){
//              cout<<" "<<c<<" ";
//         }
//         cout<<endl;
//       }
// }

// // //      1  4  9  16  25 
// // //      1  4  9  16  25 
// // //      1  4  9  16  25 
// // //      1  4  9  16  25 
// // //      1  4  9  16  25

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the last number for pattern from 1-sqr to n-sqr :";
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for (int c=1;c<=n;c++){
//              cout<<" "<<c*c<<" ";
//         }
//         cout<<endl;
//       }  
// }

// ********** Small letter Pattern **************
// // //   a  a  a  a  a 
// // //   b  b  b  b  b 
// // //   c  c  c  c  c 
// // //   d  d  d  d  d 
// // //   e  e  e  e  e 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of character for pattern from a to n :";
//     cin>>n;
//     for(int r=0;r<n;r++){
//         for (int c=0;c<n;c++){
//              cout<<" "<<char('a'+r)<<" ";
//         }
//         cout<<endl;
//       }  
// }

// // //   a  b  c  d 
// // //   a  b  c  d 
// // //   a  b  c  d 
// // //   a  b  c  d 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of character for pattern from a to n :";
//     cin>>n;
//     for(int r=0;r<n;r++){
//         for (int c=0;c<n;c++){
//              cout<<" "<<char('a'+c)<<" ";
//         }
//         cout<<endl;
//       }  
// }

// *******************************************//
// // //  1 2 3 4 5 
// // //  6 7 8 9 10 
// // //  11 12 13 14 15 
// // //  16 17 18 19 20 
// // //  21 22 23 24 25

// #include<iostream>
// using namespace std;
// int main(){
//     int n , count=1;
//     cout<<"Enter the number of character for pattern from a to n :";
//     cin>>n;
//     for(int r=0;r<n;r++){
//         for (int c=0;c<n;c++){
//              cout<<count<<" ";
//              count++;
//         }
//         cout<<endl;
//       }  
// }

