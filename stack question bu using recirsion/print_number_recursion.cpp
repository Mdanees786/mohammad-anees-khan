#include<iostream>
#include<stack>
using namespace std;
stack<int>st;
int number(int n){
    if(n==0){
        return 0;
    }
    st.push(n);
    number(n-1);
    cout<<st.top()<<endl;
    st.pop();

}
int main(){
    int num;
    cin>>num;
    cout<<number(num)<<endl;

}
