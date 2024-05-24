#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>arr={1,2,2,3,10,10,10,4,4,4,5,7,7,2};
   int n=arr.size();
   
     vector<int>brr;
     stack<int>st;
    for(int i=0;i<n;i++){
         st.push(arr[i]);
          if(i==0 && st.top()!=arr[i+1]) brr.push_back(arr[i]);
          if(i==n-1 && st.top()!=arr[i-1]) brr.push_back(arr[i]);
         if(i>0 && i<n-1){
             if(st.top()==arr[i+1] || st.top()==arr[i-1]);
             else
                 brr.push_back(arr[i]);
    
            }
        }
    
    
     for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
     }
  
    return 0;
}