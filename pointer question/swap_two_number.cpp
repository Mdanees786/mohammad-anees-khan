#include<iostream>
using namespace std;
int main(){
int a=5,b=10;
int* ptr1= &a;
int*ptr2= &b;
cout<<*ptr1<<" " <<*ptr2<<endl;
int temp;
temp =*ptr1;
*ptr1 =*ptr2;
*ptr2=temp;
cout<<*ptr1<<" " <<*ptr2<<endl;
}