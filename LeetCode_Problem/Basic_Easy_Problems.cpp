
    
    // // ****** Q.342 Power of Two ****** // //

// #include<iostream>
// using namespace std;
// bool isPowerOfFour(int n){
//         if(n<1)
//             return 0;
//         if(n==1)
//             return 1;
//         while(n!=4){
//             if(n%4==1 || n%4==2 || n%4==3){ 
//                     return 0;
//                 }
//             n/=4;
//         }
//         return 1;
// }
// int main(){
//       cout<<isPowerOfFour(1)<<endl;
// }

    // //  Convert the character from small to capital or vice versa // //

// #include<iostream>
// using namespace std;

// char charconvert(char name){
//     char ans = name-'a'+'A';
//     return ans;
// }

// int main(){
//     char letter;
//     cout<<"Enter any charater for conversion : ";
//     cin>>letter;
//     cout<<charconvert(letter);

// return 0 ;
// }

    // // Armstrong Number  // //

#include<iostream>
using namespace std;
bool Armstrong(int n){
        int m=n , count=0;

        while(0){
            n/=10;
            count++;
        }
        cout<<count;
        return 1;
}

int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     cout<<Armstrong(n);
    return 0 ;
}