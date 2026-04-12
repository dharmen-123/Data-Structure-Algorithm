
 // //  BINARY to DECIMAL CONVERSION // //

#include<iostream>
using namespace std;

int main(){
     int num , last, base2=1 ,ans=0;
     cout<<"Enter the Binary Number to convert into Decimal : ";
     cin>>num;
     int n=num;
     while(num>0){
        last=num%10;
        ans=last*base2+ans;
        num=num/10;
        base2*=2;
     }
     cout<<n<<" Decimal value is : "<<ans;
}