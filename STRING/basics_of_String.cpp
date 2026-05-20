
        /*  // STRING //  */

    /* C Style string  ( Charater String) */

// #include<iostream>
// using namespace std;
// int main(){
//     char arr[]={'a','p','p','l','e','\0'};
//     for(int i=0;i<5;i++)
//     cout<<arr[i];

//     return 0 ;
// }

////////////////////////////////////////////////////
/*  The null character ('\0') is a special character with ASCII value 0.*/

// #include <iostream>
// using namespace std;
// int main() {
//     char str1[] = {'H','e','l','l','o','\0'};  // explicit null terminator
//     char str2[] = "Hello";                     // compiler adds '\0' automatically
//     cout << str1 << endl;  // Output: Hello
//     cout << str2 << endl;  // Output: Hello
// }

///////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
//     char str[10];
//     cin>>str;
//     str[3]='\0';    // Declare Null character at index 3
//     cout<<str;
// return 0 ;
// }

/////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;             //Input - Data Structure
//     cout<<s;            //Output- Data

// return 0 ;
// }

/* For accpet the input with space , Tab [ getline() ] is used in String */

// #include<iostream>
// using namespace std;
// int main(){
//     string subject;
//     cout<<"Enter the subject name :";
//     getline(cin,subject);       //input-  Data Structure &        Algorithm
//     cout<<subject;              //output- Data Structure &        Algorithm

// return 0 ;
// }

    /* // Size of String using [ size() ]*/

// #include<iostream>
// using namespace std;

// int main(){
//     string s="Algorithms";
//     cout<<s.size();

// return 0 ;
// }

    /* // Concatenation of String using + and append() // */

// #include<iostream>
// using namespace std;
// int main(){
//     string s1="Ram";
//     string s2="Shyam";
//     cout<<s1+s2<<endl;      // RamShyam
//     cout<<s1+" "+s2<<endl;  // Ram Shyam
//     s1.append(s2);
//     cout<<s1;   //output - RamShyam
// return 0 ;
// }

    /*  // ESCAPE Charater [ \ ] use to print the " " double qoutes //  */

// #include<iostream>
// using namespace std;
// int main(){
//     string s="I am a Btech \"Enginnering\" student";
//     cout<<s<<endl;
//     cout<<"Escape Charater "<<"\\";

// return 0 ;
// }

        /*  // Reverse String  //  */

// #include<iostream>
// using namespace std;

// int main(){
//     string s="Structure";
//     int start=0, end=s.size()-1;
//     while(start<end){
//         swap(s[start],s[end]);
//         start++ , end--;
//     }
//     cout<<s<<endl;        //output- erutcurtS

//     /* Calculate the size of string using Null charater */
//     int size=0;
//     while(s[size]!='\0'){
//         size++;
//     }
//     cout<<"Size of String "<<size;
// return 0 ;
// }