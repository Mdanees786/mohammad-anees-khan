#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>st2;
    stack<int>temp;
    st.push(1);
    st.push(2);
    st.push(2);
    temp = st;
    while(!st.empty()){
        st2.push(st.top());
        st.pop();

    }
    if(st2==temp){
        cout<<"yes palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}