#include<iostream>
using namespace std;
class Student{
    public:
    int roll_no;
    string name;
    void display(){
        cout<<" roll no"<<" "<< roll_no<<" "<<name<<" "<<name<<endl;
    }
};
int main(){
Student s;
s.name ="md anees";
s.roll_no = 707;
s.display();

}