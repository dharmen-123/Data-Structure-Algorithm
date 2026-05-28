
        /*  // Double Pointer   // */

// #include<iostream>
// using namespace std;
// void func(int **p1){
//     **p1=**p1+2;
// }
// int main(){
//     int n=10;
//     int *p =&n;
//     int **ptr = &p;
//     func(ptr);
//     cout<<*p<<endl;
//     cout<<&p<<endl;
//     cout<<n<<endl;
//     cout<<&n;

// return 0 ;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n=20;
//     int *p= &n;     // Single pointer
//     int **p1 = &p;  // Double Pointer
//     int ***p2 = &p1;  // Triple Pointer
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<p1<<endl;
//     cout<<&p1<<endl;
//     cout<<p2<<endl;

//     **p1 = **p1+3;
//     cout<<n<<endl;

// return 0 ;
// }

        /*  Gate Question */

// #include<iostream>
// using namespace std;
// int main(){
//         char c[]="GATE2024";
//         char *p = c;
//         cout<<p<<endl;
//         cout<<p+p[3]-p[1];

// return 0;
// }

        /*  Gate Question */

// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr;
//     int x=0;
//     ptr=&x;
//     int y=*ptr;
//     *ptr =1;
//     cout<<x<<" "<<y;

// return 0 ;
// }

        /*  //  Practise Question // */

// #include<iostream>
// using namespace std;

// int main(){
//     int a=5 , b=10;
//     int &name = a;
//     int *ptr = &a;
//     (*ptr)++;
//     ptr= &b;
//     *ptr = *ptr+5;
//     name+=5;
//     cout<<a<<"  "<<b;

// return 0 ;
// }


#include<iostream>
using namespace std;
int Four(int x,int *py ,int **ppz){
    int y, z;
    (**ppz)+=1;
    z = **ppz;
    (*py)+=2;
    y = *py;
    x+=3;
}
int main(){
        int c, *b , **a;
        c=4 , b= &c , a = &b;
        cout<<Four(c,b,a);

return 0 ;
}