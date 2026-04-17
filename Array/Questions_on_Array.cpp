
    // //  Maximum element of array // // 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[5]={6,2,8,13,26};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr1[i]>ans){
            ans=arr1[i];
        }
    }
    cout<<"Maximum value is :"<<ans;
return 0 ;
}