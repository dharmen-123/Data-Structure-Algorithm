
    /* // // Q.42 Trapping Rain Water // // */

#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
        int n=height.size(),water=0;
        int leftmax=0, rightmax=0,maxheight=height[0],index=0;
        //Max height of building
        for(int i=1;i<n;i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            }
        }
        //Left part
            for(int i=0;i<index;i++){
                if(leftmax>height[i]){
                    water+=leftmax-height[i];
                }
                else{
                    leftmax=height[i];
                }
            }
        // Right part
          for(int i=n-1;i>index;i--){
                if(rightmax>height[i]){
                    water+=rightmax-height[i];
                }
                else{
                    rightmax=height[i];
                }
            }
        return water;
    } 

int main(){
        vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
        cout<<"Total water : "<<trap(height);

return 0 ;
}