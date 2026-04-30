
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v={2,3,4};
    for(auto k:v){
    cout<<k<<" ";
    }
    cout<<"Insert data into vector :";
    v.push_back(10);
    v.push_back(6);
    v.push_back(9);
    cout<<endl;
    // v.clear();
    for(auto k:v){
    cout<<k<<" ";
    }
    cout<<"remove last data from vector :";
    v.pop_back();
    cout<<endl;
    for(auto k:v){
    cout<<k<<" ";
    }
    cout<<endl<<"Size of vector :"<<v.size();
    cout<<endl<<"capacity of vector :"<<v.capacity();
    v.push_back(20);
    v.push_back(16);
    cout<<endl<<"Size of vector :"<<v.size();
    cout<<endl<<"capacity of vector :"<<v.capacity();
return 0 ;
}