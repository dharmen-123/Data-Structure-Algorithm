
     // // Q. Allocation minimumn Number of Pages    //

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int findPages(vector<int> &arr, int K) {
//         int N=arr.size();
//         if(K>N)
//          return -1;
//         int start=0,end=0,mid, ans;
//         for(int i=0;i<N;i++){
//                 start=max(start,arr[i]);
//                 end+=arr[i];
//         }
//         while(start<=end){
//            mid=(start+end)/2;
//            int pages=0, count=1;
//            for(int i=0;i<N;i++){
//                 pages+=arr[i];
//                 if(pages>mid){
//                      count++;
//                      pages=arr[i];
//                 }
//            }
//            if(count<=K){
//                 ans=mid;
//                 end=mid-1;
//            }
//            else{
//                 start=mid+1;
//            }
//         }
//         return ans;
//     }
// int main(){
//         vector<int>arr={12,34,67,90};
//         int m=2;
//         cout<<findPages(arr,m);
// return 0 ;
// }

        // // Q.  Painter's Partition Problem //
    
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minTime(vector<int>& arr, int k) {
//         int N=arr.size();
//         if(k>N)
//          return -1;
//         int start=0,end=0,mid, ans;
//         for(int i=0;i<N;i++){
//                 start=max(start,arr[i]);
//                 end+=arr[i];
//         }
//         while(start<=end){
//            mid=(start+end)/2;
//            int pages=0, count=1;
//            for(int i=0;i<N;i++){
//                 pages+=arr[i];
//                 if(pages>mid){
//                      count++;
//                      pages=arr[i];
//                 }
//            }
//            if(count<=k){
//                 ans=mid;
//                 end=mid-1;
//            }
//            else{
//                 start=mid+1;
//            }
//         }
//         return ans;       
//     }
// int main(){
//     vector<int>arr={5, 10, 30, 20, 15};
//     int k=3;
//     cout<<minTime(arr,k);

// return 0 ;
// }

        /* //  Aggressive cows //   */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int aggressiveCows(vector<int> &stalls, int k) {
//         int start=1,end, mid, ans , n=stalls.size();
//         sort(stalls.begin(),stalls.end());
//         end=stalls[n-1]-stalls[0];
//         while(start<=end){
//            mid=(start+end)/2;
//            int count=1 , position = stalls[0];
//            for(int i=1;i<n;i++){
//                 if(position+mid<=stalls[i]){
//                         count++;
//                         position=stalls[i];
//                 }
//            }
//            if(count<k){
//                 end=mid-1;
//            }
//            else{
//                 ans=mid;
//                 start=mid+1;
//            }
//         }
//         return ans;
//     }
// int main(){
//         vector<int>stalls={1, 2, 4, 8, 9};
//         int k=3;
//         cout<<aggressiveCows(stalls,k);
        
// return 0 ;
// }

        /*  // // Segregate 0s and 1s // //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// void segregate0and1(vector<int> &arr) {
//         int count0=0,count1=0 , n=arr.size();
//         for(int i=0;i<n;i++){
//                 if(arr[i]==0){
//                         count0++;
//                 }
//                 else{
//                         count1++;
//                 }
//         }
//         int index=0;
//         while(count0>0){
//                 arr[index++]=0;
//                 count0--;
//         }
//         while(count1>0){
//                 arr[index++]=1;
//                 count1--;
//         }
// }
// int main(){
//         vector<int>arr={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
//         segregate0and1(arr);
//         for(auto k:arr){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void segregate0and1(vector<int> &arr) {
//         int start=0, end=arr.size()-1;
//         while(start<=end){
//                 if((arr[start]==1 && arr[end]==0)){
//                         swap(arr[start],arr[end]);
//                         start++;
//                         end--;
//                 }
//                 else if(arr[start]==0){
//                         start++;
//                 }
//                 else if(arr[start]==1 && arr[end]==1){
//                         end--;
//                 }
//                 else{
//                         start++;
//                 }
//         }
// }
// int main(){
//         vector<int>arr={1,1};
//         segregate0and1(arr);
//         for(auto k:arr){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }

        /*  // Kadane's Algorithm  //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// int maxSubarraySum(vector<int> &arr) {
//         int Prefix=0, maxi=INT16_MIN, n=arr.size();
//         for(int i=0;i<n;i++){
//              Prefix+=arr[i];
//              maxi=max(maxi,Prefix);
//              if(Prefix<0){
//                  Prefix=0;
//              }
//         }
//         return maxi;
//     }
// int main(){
//         vector<int>arr={2, 3, -8, 7, -1, 2, 3};
//         cout<<maxSubarraySum(arr);

// return 0 ;
// }

        /*  // Triplet Sum in Array  //  */

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
//  bool hasTripletSum(vector<int> &arr, int target) {
//         sort(arr.begin(),arr.end());
//         int n=arr.size(),X=0,start , end;
//         for(int i=0;i<n-2;i++){
//             start=i+1 , end=n-1;
//             X=target-arr[i];
//             while(start<end){
//                 if(arr[start]+arr[end]==X){
//                         return 1;
//                 }
//                 else if(arr[start]+arr[end]>X){
//                         end--;
//                 }
//                 else{
//                         start++;
//                 }
//             } 
//         }
//         return 0;
//     }
// int main(){
//         vector<int>arr={1, 4, 45, 6, 10, 2};
//         int target=13;
//         cout<<hasTripletSum(arr,target);
// return 0 ;
// }

        /* // // Four Elements // //  */

// #include<iostream>
// using namespace std;
// bool find4Numbers(int A[], int n, int X) {
        
//         for(int i=0;i<n-3;i++){
//              for(int j=i+1;j<n-2;j++){
//                 int ans=X-A[i]-A[j];
//                 int start=j+1,end=n-1;
//                 while(start<end){
//                     if(A[start]+A[end]==ans){
//                             return 1;
//                     }
//                     else if(A[start]+A[end]>ans){
//                             end--;
//                     }
//                     else{
//                             start++;
//                     }
//             } 
//              }
//         }
// }
// int main(){
//         int arr[]={1, 5, 1, 0, 6, 0};
//         int target=7;
//         int n=sizeof(arr)/sizeof(arr[0]);
//         cout<<find4Numbers(arr,n,target);

// return 0 ;
// }

        /* // Rotate Matrix by 180deg Clockwise // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void rotateMatrix(vector<vector<int>>& mat) {
//         int row=mat.size(), col=mat[0].size();
//         int k=0;
//         while(k<col){
//           int n=col;
//           for(int i=0;i<row/2;i++){
//                 swap(mat[i][k],mat[n-1][k]);
//                 n--;
//           }
//           k++;
//         }
//         k=0;
//         while(k<col){
//           int n=col;
//           for(int i=0;i<row/2;i++){
//                 swap(mat[k][i],mat[k][n-1]);
//                 n--;
//           }
//           k++;
//         }
//     }
// int main(){
//         // vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
//         vector<vector<int>>matrix={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
//         rotateMatrix(matrix);
//         for(auto k:matrix){
//            for(auto v:k){
//                 cout<<v<<" ";
//            }
//            cout<<endl;
//         }

// return 0 ;
// }

        /* // Search in row-column sorted Matrix  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool searchMatrix(vector<vector<int>> &mat, int x) {
//         int row=mat.size(), col=mat[0].size();
//         int i=0, j=col-1;
//         while(i<=row && j>=0){
//              if(mat[i][j]==x){
//                  return true;
//              }
//              else if(mat[i][j]>x){
//                 j--;
//              }
//              else{
//                 i++;
//              }
//         }
//         return false;
//     }
// int main(){
//         vector<vector<int>>matrix={{1, 5, 9},
//                                    {14, 20, 21}, 
//                                    {30, 34, 43}};
//         int target = 14;
//         cout<<searchMatrix(matrix,target);


// return 0 ;
// }

          /* // Missing And Repeating  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> findTwoElement(vector<int>& arr) {
//         int n=arr.size();
//         sort(arr.begin(),arr.end());
//         vector<int>count(n,0);
//         vector<int>result;
//         for(int i=0;i<n;i++){
//             count[arr[i]-1]++;
//         }
//         int missing=0,repeat=arr[0];
//         for(int j=0;j<n;j++){
//                 if(count[j]==2){
//                         repeat=j+1;
//                 }
//                 if(count[j]==0){
//                         missing=j+1;
//                 }
//         }
//         result.push_back(repeat);
//         result.push_back(missing);
//         return result;
// }
// int main(){
//         vector<int>arr={7,5,8,5,2,6,3,4};
//         vector<int>ans=findTwoElement(arr);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }        
// return 0 ;
// }

          /* // Frequencies in a Limited Array  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> frequencyCount(vector<int>& arr) {
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//                 arr[i]=arr[i]-1;
//         }
//         int rem=0;
//         for(int i=0;i<n;i++){
//              rem=arr[i]%n;
//              arr[rem]+=n;
//         }
//         int div=0;
//         for(int i=0;i<n;i++){
//             div=arr[i]/n;
//             arr[i]=div;
//         }
//         return arr;        
//     }
// int main(){
//         vector<int>arr={2, 3, 2, 3, 5};
//         vector<int>ans=frequencyCount(arr);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }


                /* // String Rotated by 2 Places  //  */

// #include<iostream>
// using namespace std;
// void rotateclockwise(string& s1){
//         int n=s1.size();
//         char c=s1[n-1];
//         int index=n-2;
//         while(index>=0){
//              s1[index+1]=s1[index];
//              index--;
//         }
//         s1[0]=c;
// }
// void rotateanticlockwise(string& s1){
//         int n=s1.size();
//         char c=s1[0];
//         int index=1;
//         while(index<n){
//              s1[index-1]=s1[index];
//              index++;
//         }
//         s1[n-1]=c;
// }
// bool isRotated(string& s1, string& s2) {
//         string clockwise=s1, anticlock=s2;
//         rotateclockwise(clockwise);
//         rotateclockwise(clockwise);
//         if(clockwise==s2){
//                 return true;
//         }
//         rotateanticlockwise(s1);
//         rotateanticlockwise(s1);
//         if(s1==s2){
//                 return true;
//         }
//     return false;
//     }
// int main(){
//         // string s1 = "amazon", s2 = "azonam";
//         string s1 = "geeksforgeeks", s2 = "geeksgeeksfor";
//         cout<<isRotated(s1,s2);

// return 0 ;
// }


        /* // Sort a String  //  */

// #include<iostream>
// #include<vector>
// using namespace std;
// string sortString(string &s) {
//         vector<int>alpha(26,0);
//         for(int i=0;i<s.size();i++){
//                 alpha[s[i]-'a']++;
//         }
//         string ans;
//         for(int i=0;i<26;i++){
//                 char c='a'+i;
//                 while(alpha[i]){
//                    ans+=c;
//                    alpha[i]--;
//                 }
//         }
//         return ans;
//     }
// int main(){
//         string s = "edcab";
//         cout<<sortString(s);

// return 0 ;
// }

        /* // Min Chars to Add for Palindrome  // */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int minChar(string &s) {
//         string rev=s;
//         reverse(s.begin(),s.end());
//         int size=s.size();
//         string temp = s + '&' + rev;
//         int n = temp.size();
//         vector<int>lps(n,0);
//         int pre=0,suf=1;
//         while(suf<n){
//              if(s[pre]==s[suf]){
//                 lps[suf]=pre+1;
//                 pre++,suf++;
//             }
//             else{
//                 if(pre==0){
//                    suf++;
//                 }
//                 else{
//                    pre=lps[pre-1];
//                 }
//             }
//         }
//         return size-lps[n-1];
//     }
// int main(){
//         string s = "aacecaaa";
//         cout<<minChar(s);

// return 0 ;
// }

        /*  // Q.GCD of two numbers  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b) {
//       if(a<b){
//         swap(a,b);
//       }
//       int c;
//       while(b!=0){
//         c=b;  
//         b=a%b;
//         a=c;
//       }
//    return a;
//     }
// int main(){
//         int a=20,b=28;
//         cout<<gcd(a,b);

// return 0 ;
// }

        /* // Q.Longest Prefix Suffix // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int getLPSLength(string &s) {
//        vector<int>lps(s.size(),0);
//        int pre=0,suf=1;
//        while(suf<s.size()){
//           if(s[pre]==s[suf]){
//                 lps[suf]=pre+1;
//                 pre++,suf++;
//           }
//           else{
//                 if(pre==0){
//                     lps[suf]=0;
//                     suf++;    
//                 }
//                 else{
//                      pre=lps[pre-1];   
//                 }
//           }
//        }
//        return lps[lps.size()-1];
// }
// int main(){
//         string s = "aabcdaabc";
//         // string s = "aaaa";
//         // string s = "ABCDEABCD";
//         cout<<getLPSLength(s);

// return 0 ;
// }

        /* // Q.Delete without head Pointer // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//      int data;
//      Node *next;
//         Node(int val){
//             data=val;
//             next=NULL;
//         }
// };
// void deleteNode(Node* del_node) {
//         Node *temp=del_node->next;
//         del_node->data=temp->data;
//         del_node->next=temp->next;
//         delete temp;
//     }
// int main(){
//         Node *Head=new Node(10);
//         Node *n2=new Node(20);
//         Node *n3=new Node(4);
//         Node *n4=new Node(30);
//         Head->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         deleteNode(n2);

//          /* Print the linked List */
//         Node *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }

//     return 0;
// }

        /* // Q.Remove Every k'th in Linked List  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//      int data;
//      Node *next;
//         Node(int val){
//             data=val;
//             next=NULL;
//         }
// };
// Node* CreateLL(vector<int>& arr, int index){
//         if(index==arr.size()){          /* Base condition */    
//             return NULL;
//         }
//         Node *temp;
//         temp=new Node(arr[index]);
//         temp->next=CreateLL(arr,index+1);  
//         return temp;
// }
// Node* deleteK(Node* head, int K) {
//         int count=1;
//         if(K==1){
//            return NULL;
//         }
//         Node *curr=head;
//         Node *prev=NULL;
//         while(curr!=NULL){
//              if(count==K){
//                 prev->next=curr->next;
//                 delete curr; 
//                 curr=prev->next;
//                 count=1;
//              } 
//              else{
//                 count++;
//                 prev=curr;
//                 curr=curr->next;
//              } 
//         }
//         return head;
//     }

// int main(){
//         Node *Head=NULL;
//         vector<int>arr={1,2,3,4,5,6,7,8,9,10};
//         Head=CreateLL(arr,0);
        
//         int k=3;
//         Head=deleteK(Head,k);

//         /* Print the linked List */
//         Node *temp=Head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }

//     return 0;
// }

        /* Q.Intersection in Y Shaped Lists */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//      int data;
//      Node *next;
//         Node(int val){
//             data=val;
//             next=NULL;
//         }
// };
// Node* intersectPoint(Node* head1, Node* head2) {
//         int l1=0,  l2=0;
//         Node* curr=head1;
//         while(curr && curr->next){
//                 l1+=1;
//                 curr=curr->next;
//         }
//         curr=head2;
//         while(curr && curr->next){
//                 l2+=1;
//                 curr=curr->next;
//         }
//         Node* curr1=head1;
//         Node* curr2=head2;
//         int count;
//         if(l1>l2){
//             count=l1-l2;
//             while(count--){
//                 curr1=curr1->next;
//             }    
//         }
//         else{
//             count=l2-l1;
//             while(count--){
//                 curr2=curr2->next;
//             }
//         }
//         while(curr1!=curr2){
//               curr1=curr1->next;  
//               curr2=curr2->next;  
//         }
//         return curr2;
//     }

// int main(){
//         Node *Head2=new Node(3);
//         Node *n2=new Node(6);
//         Node *n3=new Node(9);
//         Node *n4=new Node(15);
//         Node *n5=new Node(30);
//         Head2->next=n2;
//         n2->next=n3;
//         n3->next=n4;
//         n4->next=n5;

//         Node *Head1=new Node(10);
//         Head1->next=n4;

//         Head1=intersectPoint(Head1,Head2);
//         /* Print the linked List */
//         Node *temp=Head1;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }

//     return 0;
// }

        /* // Q.Insert an Element at the Bottom of a Stack  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// stack<int> insertAtBottom(stack<int> st, int x) {
//         stack<int>temp;
//         while(!st.empty()){
//               temp.push(st.top());
//               st.pop();  
//         }
//         st.push(x);
//         while(!temp.empty()){
//            st.push(temp.top());
//            temp.pop();
//         }
//      return st;
//     }
// int main(){
//         stack<int>st({4,3,2,1,8});
//         int x=2;
//         stack<int>ans=insertAtBottom(st,x);
//         while(!ans.empty()){
//                 cout<<ans.top()<<" ";
//                 ans.pop();
//         }
// return 0 ;
// }

        /* // Q.Make the array beautiful // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> makeBeautiful(vector<int> arr) {
//           stack<int>st;
//           for(int i=0;i<arr.size();i++){
//                 if(st.empty()){
//                     st.push(arr[i]);    
//                 }        
//                 else if((arr[i]>=0 && st.top()>=0) || (arr[i]<0 && st.top()<0)){
//                 st.push(arr[i]);
//                 }
//                 else{
//                 st.pop();
//              }   
//           }
//          arr.clear();
//          while(!st.empty()){
//                 arr.push_back(st.top());
//                 st.pop();
//          }  
//          reverse(arr.begin(),arr.end());
//          return arr;
//     }
// int main(){
//         vector<int>arr={4, 2,-2, 1};
//         vector<int>ans=makeBeautiful(arr);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }

        /* // Q.Remove Two Consecutive Same // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int removeConsecutiveSame(vector<string>& arr) {
//         stack<string>s;
//         for(int i=0;i<arr.size();i++){
//                 if(s.empty()){
//                         s.push(arr[i]);
//                 }
//                 else if(s.top()==arr[i]){
//                         s.pop();
//                 }
//                 else{
//                         s.push(arr[i]);
//                 }
//         }
//         return s.size();
// }
// int main(){
//         vector<string>arr={"ab", "aa", "aa", "bcd", "ab"};
//         // vector<string>arr={"tom", "jerry", "jerry", "tom"};
//         cout<<removeConsecutiveSame(arr);

// return 0 ;
// }

                /* // Q.Print Bracket Number // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> bracketNumbers(string &s) {
//         int count =0;
//         stack<int>st;
//         vector<int>ans;
//         for(int i=0;i<s.size();i++){
//              if(s[i]=='('){
//                 count++;
//                 st.push(count);
//                 ans.push_back(count);
//              }
//              else if(s[i]==')'){
//                 ans.push_back(st.top());
//                 st.pop();
//              }
//         }
//    return ans;
//     }
// int main(){
//         string s = "(aa(bdc))p(dee)";
//         // string s = "(((()(";
//         vector<int>ans=bracketNumbers(s);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }

        /* // Q.The Celebrity Problem  //  */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int celebrity(vector<vector<int>>& mat) {
//         stack<int>st;
//         int n=mat.size();
//         for(int i=n-1;i>=0;i--){
//                 st.push(i);
//         }
//         while(st.size()>1){
//                 int first=st.top();
//                 st.pop();
//                 int second=st.top();
//                 st.pop();
//                 if(mat[first][second] && !mat[second][first]){
//                         st.push(second);
//                 }
//                 else if(!mat[first][second] && mat[second][first]){
//                         st.push(first); 
//                 }
//         }
//         if(st.empty()){
//               return -1;  
//         }
//         int num=st.top();
//         st.pop();
//         int row=0,col=0;
//         for(int i=0;i<n;i++){
//              row+=mat[num][i];
//              col+=mat[i][num];   
//         }
//         return (row==1 && col==n) ? num : -1;        
// }
// int main(){
//         vector<vector<int>>mat={{1, 1, 0},
//                                 {0, 1, 0},
//                                 {0, 1, 1}};
//         cout<<celebrity(mat);

// return 0 ;
// }


                /* // Q.Get Min from Stack // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class SpecialStack {
// 	stack<int>st1;
// 	stack<int>st2;
// 	public:
	
// 	void push(int x) {
// 		// Add an element to the top of Stack
// 		st1.push(x);
// 		if (st2.empty())
// 			st2.push(x);
// 		else
// 			st2.push(min(st2.top(), x));
// 	}
	
// 	void pop() {
// 		// Remove the top element from the Stack
// 		if (!st1.empty()) {
// 			st1.pop();
// 			st2.pop();
// 		}
// 	}
	
// 	int peek() {
// 		// Returns top element of the Stack
// 		if (!st1.empty()) {
// 			return st1.top();
// 		}
// 	    return -1;
// 	}
	
// 	bool isEmpty() {
// 		// Check if stack is empty
// 			return st1.empty();
// 	}
	
// 	int getMin() {
// 		// Finds minimum element of Stack
// 		if (st2.empty()) {
// 			return - 1;
// 		}
// 		else {
// 			return st2.top();
// 		}
// 	}
// };
// int main(){
//     SpecialStack st;
//     st.push(2);
//     st.push(3);
//     cout << "Top = " << st.peek() << endl;
//     cout << "Min = " << st.getMin() << endl;
//     st.pop();
//     cout << "Top = " << st.peek() << endl;
//     cout << "Min = " << st.getMin() << endl;
//     st.push(1);
//     cout << "Top = " << st.peek() << endl;
//     cout << "Min = " << st.getMin() << endl;
//     st.pop();
//     st.pop();
//     cout << "Is Empty = " << st.isEmpty() << endl;
//     cout << "Top = " << st.peek() << endl;
//     cout << "Min = " << st.getMin() << endl;

// return 0 ;
// }


                /* // Q.Queue Reversal  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void reverseQueue(queue<int> &q) {
//       stack<int>s;
//     /* Insert the element into stack */
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }

//     /* Pop elemenet from stack and insert into queue */
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
     
// }
// int main(){
//      queue<int>q;
//     q.push(5);
//     q.push(10);
//     q.push(15);
//     q.push(20);
//     q.push(25);
//     reverseQueue(q);    
//     int n=q.size();
//     /* print all the element */
//     while(n--){
//         cout<<q.front()<<" ";
//         int val=q.front();
//         q.pop();
//         q.push(val);
//     }

// return 0 ;
// }

                /* // Q.Reverse first K of a Queue  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// queue<int> reverseFirstK(queue<int> q, int k) {
//         if(k > q.size())
//            return q;
//         stack<int>s;
//         while(k--){
//            s.push(q.front());
//            q.pop();
//         }    
//         int n=q.size();
//         while(!s.empty()){
//            q.push(s.top());
//            s.pop();
//         }
//         while(n--){
//            q.push(q.front());                    
//            q.pop();
//         }
//        return q; 
// }
// int main(){
//         queue<int>q;
//         int k=3;
//         q.push(1);
//         q.push(2);
//         q.push(3);
//         q.push(4);
//         q.push(5);
//         queue<int>ans= reverseFirstK(q,k);
//         int n=q.size();
//         /* print all the element */
//         while(n--){
//                 cout<<ans.front()<<" ";
//                 ans.push(ans.front());
//                 ans.pop();
//         }

// return 0 ;
// }

                        /* // Q.Array Subset // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isSubset(vector<int> &a, vector<int> &b) {
//         unordered_map<int,int>freq;
//         for(auto x:a){
//            freq[x]++;
//         }
//         for(auto x:b){
//                 if(freq[x]==0){
//                         return false;
//                 }
//                 freq[x]--;
//         }
//         return true;

// }
// int main(){
//         vector<int>a={11, 7, 1, 13, 21, 3, 7, 3},b = {11, 3, 7, 1, };
//         cout<<isSubset(a,b);
// return 0 ;
// }


        /* // Q.First Negative in Windows of Size K // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> firstNegInt(vector<int>& arr, int k) {
//        queue<int>q;
//        vector<int>ans;
//        for(int i=0;i<k-1;i++){
//            if(arr[i]<0)
//               q.push(i);
//        }
//        for(int i=k-1;i<arr.size();i++){
//            if(arr[i]<0)
//               q.push(i);
//            if(q.empty())
//                 ans.push_back(0);
//            else{
//                 if(q.front()<=i-k){
//                       q.pop();  
//                 }
//                 if(q.empty())
//                    ans.push_back(0);
//                 else{
//                     ans.push_back(arr[q.front()]);    
//                 }
//            }  
//        }
//        return ans;        
// }
// int main(){
//         vector<int>arr={12, -1, -7, 8, -15, 30, 16, 28};
//         int k=3;
//         vector<int>ans=firstNegInt(arr,k);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }
// return 0 ;
// }


        /* // Q.Median of Array // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     double findMedian(vector<int> &arr) {
//          sort(arr.begin(),arr.end());
//          int n=arr.size();
//          if(n%2==0){
//              double median;
//              median=(arr[n/2]+arr[(n-1)/2]);
//              return median/2;
//          }
//          else{
//              return arr[n/2];
//          }
//     }
// int main(){
//         // vector<int>arr={56, 67, 30, 79};
//         vector<int>arr={90, 100, 78, 89, 67};
//         cout<<findMedian(arr);
// return 0 ;
// }

        /* // Q.Quadratic Equation Roots  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int>quadraticRoots(int a, int b, int c) {
//         if (a == 0)
//            return {};
//         int root1, root2;
//         long long d = (b*b)-(4*a*c);
//         if(d<0)
//             return {-1, -1};
//         root1 = floor((-b + sqrt(d)) / (2.0 * a));
//         root2 = floor((-b - sqrt(d)) / (2.0 * a));
//         if (root1 < root2)
//             swap(root1, root2);
//         return {root1, root2};        
// }
// int main(){
//         int a = 1, b = -2, c = 1;
//         // int a = 6, b = 16, c = 3;
//         vector<int>ans=quadraticRoots(a,b,c);
//         cout<<ans[0]<<" "<<ans[1];
// return 0 ;
// }

        /* // Q.Middle of Three // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int middle(int a, int b, int c) {
//         if(a>b && c<b){
//                 return b;
//         }
//         else if(b>a && c<a){
//                 return a;
//         }
//         else
//           return c;
        
// }
// int main(){
//         // int  a = 978, b = 518, c = 300;
//         int  a = 162, b = 934, c = 200;
//         cout<<middle(a,b,c);

// return 0 ;
// }


        /* // Q.Palindrome Digit Sum  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isDigitSumPalindrome(int n) {
//         int sum=0;
//         while(n>0){
//             sum+=n%10;
//             n=n/10; 
//         }
//         int rev=0,m=sum;
//         while(sum>0){
//              int last=sum%10;
//              rev=rev*10+last;
//              sum=sum/10;   
//         }
//         if(rev==m)
//              return true;   
//         return false;
// }
// int main(){
//         int n=98;
//         cout<<isDigitSumPalindrome(n);

// return 0 ;
// }

        /* // Q.LCM And GCD  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> lcmAndGcd(int a, int b) {
//         if(a<b)
//              swap(a,b);
//         int i=a;
//         while((i%a!=0) || (i%b!=0)){
//               i+=a;
//         }
//         while(b!=0){
//              int rem=a%b;
//              a=b;
//              b=rem;   
//         }
//       return {i,a};
//     }
// int main(){
//        int a=14,b=8;
//        vector<int>ans=lcmAndGcd(a,b);
//        cout<<ans[0]<<" "<<ans[1]<<endl; 

// return 0 ;
// }

                /* // Q.Min and Max in Array // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> getMinMax(vector<int> &arr) {
//         if(arr.size()==1)
//               return {arr[0],arr[0]};   
//         int minimum=INT_MAX, maximum=INT_MIN;
//         for(int i=0;i<arr.size();i++){
//            minimum=min(minimum,arr[i]);
//            maximum=max(maximum,arr[i]);
//         } 
//         return {minimum,maximum};         
// }
// int main(){
//       vector<int>arr={1, 4, 3, 5, 8, 6};
//       vector<int>ans=getMinMax(arr);
//       cout<<ans[0]<<" "<<ans[1]<<endl; 
        
// return 0 ;
// }

                /* // Q.Alternates in an Array // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> getAlternates(vector<int> &arr) {
//             vector<int>ans;
//             for(int i=0;i<arr.size();i+=2){
//                 ans.push_back(arr[i]);
//             }
//     return ans;
// }
// int main(){
//         vector<int>arr={1,2,3,4,5};
//         vector<int>ans=getAlternates(arr);
//         for(auto k:ans){
//                 cout<<k<<" ";
//         }
        
// return 0 ;
// }


                /* // Q.Count Smaller in an Array  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int countOfElements(int x, vector<int> &arr) {
//         int count=0;
//         for(int i=0;i<arr.size();i++){
//               if(arr[i]<=x){
//                 count++;
//               }  
//         }
//     return count;    
// }
// int main(){
//         int x = 9;
//         vector<int>arr = {10,1,2,8,4,5};
//         cout<<countOfElements(x,arr);

// return 0 ;
// }

        /* // Q.Median of 2 Sorted Arrays of Same Size // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// double medianOf2(vector<int>& a, vector<int>& b) {
//         vector<int>merge;
//         int i=0,j=0;
//         while(a.size()>i && b.size()>j){
//              if(a[i]>b[j]){
//                 merge.push_back(b[j++]);   
//              }
//              else{
//                 merge.push_back(a[i++]);   
//              }   
//         }  
//         if(j<b.size()){
//             while(j<b.size())
//                merge.push_back(b[j++]);   
//         }
//         else{
//             while(i<a.size())
//                merge.push_back(a[i++]);   
//         }
//         int n=merge.size();
//         if(n%2==0){

//              return (double)(merge[(n-1)/2]+merge[n/2])/2;   
//         }
//         return (double)merge[n/2];
// }
// int main(){
// //        vector<int>a= {-5, 3, 6, 12, 15}, b={-12,-10,-6,-3,4};
//        vector<int>a= {2,3,5,7}, b={10,12,14,16};
//        cout<<medianOf2(a,b); 

// return 0 ;
// }

        /* // Q.Move all negative elements to end // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void segregateElements(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> temp;
//         for (int i = 0; i < n; i++) {
//             if (arr[i] >= 0) temp.push_back(arr[i]);
//         }
//         for (int i = 0; i < n; i++) {
//             if (arr[i] < 0) temp.push_back(arr[i]);
//         }
//         for (int i = 0; i < n; i++) {
//             arr[i] = temp[i];
//         }
// }
// int main(){
//         vector<int>arr={1, -1, 3, 2, -7, -5, 11, 6};
//         segregateElements(arr);
//         for(auto k:arr){
//                 cout<<k<<" ";
//         }

// return 0 ;
// }

                /* // Q.Points in Straight Line  // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxPoints(vector<int>& x, vector<int>& y) {
//         int n=x.size();
//         if(n<=2)
//           return n;
//         int result=2;
//         for(int i=0;i<n;i++){
//              map<pair<int,int>,int>slopecount;   
//              for(int j=i+1;j<n;j++){
//                 int dx=x[j]-x[i];
//                 int dy=y[j]-y[i];
//                 int g = __gcd(dx,dy);
//                 dx/=g;  dy/=g;
//                 if(dx<0){
//                      dx=-dx;   
//                      dy=-dy;   
//                 }
//                 else if(dx==0)
//                       dy=1;  
//                 else if(dy==0)
//                       dx=1;  
//                 slopecount[{dx,dy}]++;
//                 result=max(result,slopecount[{dx,dy}]+1);
//              }
//         }
//        return result; 
// }
// int main(){
//         vector<int>x={1,2,3},y={1,2,3};
//         // vector<int>x={1, 3, 5, 4, 2, 1},y={1, 2, 3, 1, 3, 4};
//         cout<<maxPoints(x,y);
// return 0 ;
// }


        /* // Q.All numbers with specific difference // */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int digitSum(int x) {
//     int sum = 0;
//     while (x > 0) {
//         sum += x % 10;
//         x /= 10;
//     }
//     return sum;
// }
// int getCount(int n, int d) {
//     int low = 1, high = n, ans = n + 1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (mid - digitSum(mid) >= d) {
//             ans = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }

//     if (ans == n + 1) 
//         return 0; 
//     return n - ans + 1;         
// }
// int main(){
//         int n=14,d=3;
//         cout<<getCount(n,d);
        
// return 0 ;
// }

        /* // Q.First and last in Sorted  // */
        
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> find(vector<int>& arr, int x) {
//         int count=0,index=0;
//         for(int i=0;i<arr.size();i++){
//                 if(arr[i]==x){
//                    count++;
//                    if(count==1)
//                       index=i;
//                 }
//         }
//         if(count!=0){
//             return {index,index+count-1}; 
//         }
//         return {-1,-1};
// }
// int main(){
//         // vector<int>arr={1, 3, 5, 5, 5, 5, 7, 123, 125};
//         // int x=7;
//         vector<int>arr={1, 3, 5, 5, 5, 5, 67, 123, 125};
//         int x=5;
//         vector<int>ans=find(arr,x);
//         cout<<ans[0]<<" "<<ans[1]<<endl;

// return 0 ;
// }


                /* // Q.Minimum distance in an Array //  */
        
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minDist(vector<int>& arr, int x, int y) {
        int last = -1;
        int ans = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x || arr[i] == y) {
                if (last != -1 && arr[last] != arr[i]) {
                    ans = min(ans, i - last);
                }
                last = i;
            }
        }

        if (ans == INT_MAX)
            return -1;

    return ans;
}
int main(){
        vector<int>arr={1, 2, 3, 2};
        int x=1,y=2;
        cout<<minDist(arr,x,y);
        
return 0 ;
}