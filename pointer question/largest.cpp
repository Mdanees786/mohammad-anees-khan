#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *ptr1= &a;
    int *ptr2 =&b;
    if(ptr1>ptr2){
        cout<<*ptr1<<endl;
    }
    else{
        cout<<*ptr2<<endl;
    }

}