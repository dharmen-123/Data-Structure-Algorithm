// #include<iostream>
// using namespace std;

// int main(){
      
//     cout<<"Data Structure and Algorithm";

// }

  // Prime Number Program

// #include<iostream>
// using namespace std;

// int main(){
//      int n ,c=0;
//      cout<<"check the number it is prime or not"<<endl<<"Enter the number : ";
//      cin>>n;
//      for(int i=1;i<=n;i++){
//         if(n%i==0){
//             c+=1;
//         }
//      }
//      if(c==2)
//         cout<<"Number is prime";
//      else 
//        cout<<"Not prime";

// }

// Check the character is vowel or consonant

// #include<iostream>
// using namespace std;

// int main(){
//    char a;
//    cout<<"Enter the character : ";
//    cin>>a;
//    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
//         cout<<"Character is vowel";
//    else 
//         cout<<"Character is consonant";

// }

// // // // // LOOPs ///////
// // For loop //

// #include<iostream>
// using namespace std;

// int main(){
//       int a=10;
//       for(int i=1 ; i<=a ;i++ ){
//         if(i%2==0){
//           cout<<i<<" Even"<<endl;
//         }
//         else{
//           cout<<i<<" Odd"<<endl;
//         }
//       }

// }


// // // // Print the character from a to z
// #include<iostream>
// using namespace std;

// int main(){
//      char a='a';
//      for(int i=0 ;i<26 ;i++){
//       cout<<char(a+i)<<" ";
//      }

// }

///// Print the n number in reverse order // // 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//    cout<<"Enter the number :";
//    cin>>n;
//    for(int i=n ;i>0;i--){
//     cout<<i<<" ";
//    }

// }

// // //  Print the table of any number 
// #include<iostream>
// using namespace std;

// int main(){
//    int n;
//    cout<<"Enter the number for table :";
//    cin>>n;
//    for(int i=1;i<=10;i++){
//     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//    }

// }

// // //  Fibonacci Series // // 
// #include<iostream>
// using namespace std;

// int main(){
//     int a=0 ,b=1 ,n=5,c;
//     cout<<a<<endl<<b<<endl;
//      for(int i=0;i<n-2;i++){
//         c=a+b;
//         cout<<c<<endl;
//         a=b;
//         b=c;        
//      }
// }


// #include<iostream>
// using namespace std;
//  int reverseBits(int n) {
//        int binary[32],i=0;
//        while(n>0){
//         binary[i]=n%2;
//         n=n/2;
//         i++;
//        } 
//       for(int j=i-1;j>=0;j--){
//         cout<<binary[j];
//       } 
//       return 1;
//     }
// int main(){
//      int n=43261596;
//      cout<<endl<<reverseBits(n);

// return 0 ;
// }

