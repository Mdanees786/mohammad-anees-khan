#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<string>st;
    st.push("a");
    st.push("p");
    st.push("p");
    st.push("l");
    st.push("e");
    while(!st.empty()){
cout<<st.top()<<endl;
st.pop();
    }
}
