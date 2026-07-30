#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(1);
    st.push(2);
    st.push(1);
    st.push(3);
    st.push(4);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(5);
    int count =0;
    while(!st.empty()){
        if(st.top()==1){
            count++;
           
        }
         st.pop();
    }
cout<<count<<endl;
}