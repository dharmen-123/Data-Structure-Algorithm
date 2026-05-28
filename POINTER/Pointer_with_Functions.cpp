
        /*  // Pointer With Functions  //  */

// #include<iostream>
// using namespace std;
// void increment(int *ptr){
//      *ptr = *ptr+1;
// }
// int main(){
//         int num=10;
//         int temp=num;
//         cout<<temp<<endl;
//         increment(&num);
//         cout<<num<<endl;

// return 0 ;
// }



// #include<iostream>
// using namespace std;
// void func(int *ptr){
//     for(int i=0;i<5;i++){
//         ptr[i]=2*ptr[i];
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     func(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0 ;
// }

        /*  // Swapping without using pointer // */

// #include<iostream>
// using namespace std;
// void swapping(int p1 , int p2){       //pass by value
//     int temp=p1;
//     p1=p2;
//     p2=temp;
//     cout<<p1<<" "<<p2<<endl;
//     cout<<&p1<<" "<<&p2<<endl;
// }
// int main(){
//     int first =10;
//     int second =20;
//     swapping(first , second);
//     cout<<first<<" "<<second<<endl;
//     cout<<&first<<" "<<&second<<endl;

// return 0 ;
// }


        /*  // Swapping using pointer // */

// #include<iostream>
// using namespace std;
// void swapping(int *p1 , int *p2){       //pass by Pointer
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
//      cout<<*p1<<" "<<*p2<<endl;
//      cout<<p1<<" "<<p2<<endl;
// }
// int main(){
//     int first =10;
//     int second =20;
//     swapping(&first , &second);
//     cout<<first<<" "<<second<<endl;
//     cout<<&first<<" "<<&second<<endl;

// return 0 ;
// }

        /*  // Swapping using reference // */

// #include<iostream>
// using namespace std;
// void swapping(int &p1 , int &p2){       //pass by Reference
//     int temp= p1;
//     p1=p2;
//     p2=temp;
//      cout<<p1<<" "<<p2<<endl;
//      cout<<&p1<<" "<<&p2<<endl;
// }
// int main(){
//     int first =10;
//     int second =20;
//     swapping(first , second);
//     cout<<first<<" "<<second<<endl;
//     cout<<&first<<" "<<&second<<endl;

// return 0 ;
// }

