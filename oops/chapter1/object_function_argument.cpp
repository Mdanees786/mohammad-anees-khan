#include <iostream>
using namespace std;
class Student{
    public:
    int marks;
    void result(Student s){
        if(marks>s.marks){
            cout<<"s1 pass"<<endl;
        }
        else{
            cout<<"s2 pass"<<endl;
        }
    }
};
int main(){
    Student s1,s2;
    s1.marks = 100;
    s2.marks = 99;
    s1.result(s2);

}

