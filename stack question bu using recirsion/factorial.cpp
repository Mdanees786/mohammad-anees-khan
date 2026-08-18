#include<iostream>
#include<stack>
using namespace std;
stack<int>st;
int fact(int n){
    st.push(n);
    if(n==0 || n==1){
        return 1;
    }
    int result= n*fact(n-1);
    st.pop();
    return result;

}
int main(){
    int num;
    cin>>num;
    cout<<fact(num)<<endl;
}