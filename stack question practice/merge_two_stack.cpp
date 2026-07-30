#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>st;
stack<int>st2;
stack<int>st3;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st2.push(6);
st2.push(7);
while(!st.empty()){
st3.push(st.top());
st.pop();
}
while(!st2.empty()){
    st3.push(st2.top());
    st2.pop();

}
while(!st3.empty()){
    cout<<st3.top()<<endl;
    st3.pop();
}
return 0;
}

