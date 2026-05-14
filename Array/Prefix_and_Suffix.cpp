
    /* // // PREFIX and SUFFIX // // */

    /* // PREFIX SUM */

// #include<iostream>
// #include<vector>
// using namespace std;
// void Prefix(vector<int> & arr){
//        int n=arr.size();
//        vector<int>Pre(n);
//        Pre[0]=arr[0];
//        for(int i=1;i<n;i++){
//         Pre[i]=Pre[i-1]+arr[i];
//        }
//        for(auto k:Pre){
//            cout<<k<<" ";
//        }       
// }
// int main(){
//     vector<int>arr={6,4,5,-3,2,8};
//     Prefix(arr);

// return 0 ;
// }

    /* // SUFFIX SUM */

// #include<iostream>
// #include<vector>
// using namespace std;
// void Suffix(vector<int> & arr){
//        int n=arr.size();
//        vector<int>Suf(n);
//        Suf[n-1]=arr[n-1];
//        for(int i=n-2;i>=0;i--){
//         Suf[i]=Suf[i+1]+arr[i];
//        }
//        for(auto k:Suf){
//            cout<<k<<" ";
//        }       
// }
// int main(){
//     vector<int>arr={6,4,5,-3,2,8};
//     Suffix(arr);

// return 0 ;
// }