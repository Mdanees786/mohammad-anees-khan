#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    stack<int>even;
    stack<int>odd;
    while(!st.empty()){
        if(st.top()%2==0){
       even.push(st.top());

        }
        else{
         odd.push(st.top());
        }
        st.pop();
    }
    cout<<"even stack"<<endl;
    while(!even.empty()){
        cout<<even.top()<<endl;
        even.pop();
    }
    cout<<"odd stack"<<endl;
    while(!odd.empty()){
        cout<<odd.top()<<endl;
        odd.pop();
    }
    return 0;
}