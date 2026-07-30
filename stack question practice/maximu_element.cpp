#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
   
    st.push(1);
    st.push(5);
    st.push(3);
    st.push(8);
    st.push(4);
    st.push(7);
    
    int maxi = st.top();
    bool ans = false;
    while(!st.empty()){
        if(maxi<st.top()){
         maxi = st.top();
         
        }
        st.pop();
    }
    cout<<maxi<<endl;
}