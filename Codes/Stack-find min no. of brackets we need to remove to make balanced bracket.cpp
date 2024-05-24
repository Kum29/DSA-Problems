#include <bits/stdc++.h>
using namespace std;
int minnumber(string str){
    stack<char>st;
    int n=str.size();
    int c=0;
    for(int i=0;i<n;i++){
        if(str[i]=='(') st.push(str[i]);
        else{
            if(st.size()==0) c++;
            else st.pop();
        }
    }
    while(!st.empty()){
        c++;
        st.pop();
    }
    return c;
}
int main()
{
    string str="))()()(";
    int n=minnumber(str);
    cout<<n;
    return 0;
    
}
