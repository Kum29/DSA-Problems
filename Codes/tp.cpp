#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    vector<int>brr;
   arr={1,2,2,3,4,5,6,10,10,10,6};
   int n=arr.size();
    for(int i=0;i<n;i++){
        brr.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    
    return 0;
}