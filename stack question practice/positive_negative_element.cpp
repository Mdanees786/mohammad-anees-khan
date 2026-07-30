#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
     st.push(-3);
      st.push(4);
       st.push(3);
    st.push(-4);
    st.push(-5);
    st.push(6);
    stack<int>positive;
    stack<int>negative;
    while(!st.empty()){
        if(st.top()>=0){
       positive.push(st.top());

        }
        else{
         negative.push(st.top());
        }
        st.pop();
    }
    cout<<"positive stack"<<endl;
    while(!positive.empty()){
        cout<<positive.top()<<endl;
        positive.pop();
    }
    cout<<"negative stack"<<endl;
    while(!negative.empty()){
        cout<<negative.top()<<endl;
        negative.pop();
    }
    return 0;
}