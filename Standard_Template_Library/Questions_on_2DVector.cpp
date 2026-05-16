
    /* // Wave form //  */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>>mat={
                {1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
                {13, 14, 15, 16}
        };
    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=0;j<4;j++){
                cout<<mat[j][i]<<" ";
            }    
        }
        else{
            for(int j=3;j>=0;j--){
                cout<<mat[j][i]<<" ";
            }
        }
    } 

return 0 ;
}