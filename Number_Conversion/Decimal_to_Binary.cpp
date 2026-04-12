
 // //  DECIMAL to BINARY CONVERSION // //

 #include<iostream>
 using namespace std;
 
 int main(){
     int rem , num , tens=1 , ans=0;
     cout<<"Enter the Decimal Number to convert into Binary : ";
     cin>>num;
     int n=num;
     while(num>0){
        rem = num%2;
        num = num/2;
        ans = rem*tens+ans;
        tens*=10;
     }
     cout<<n<<" Binary number is : "<<ans;
     
 }