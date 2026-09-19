#include <iostream>
using namespace std;
class  Anees{
    private:
     int salary;
     public:
     void total(int salary){
        cout<<salary<<endl;
     }

};
int main(){
    Anees a1;
    a1.total(2000000);

}