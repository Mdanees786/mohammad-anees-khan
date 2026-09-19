//priority queue insert and delete element in sorted order
#include <iostream>
#include <queue>
using namespace std;
class priorityQueue {
    int data[100];
    int priority[100];
    int size;
public:
    priorityQueue() {
        size = 0;
    }
    void enqueue(int x, int p)
     { 
        if(size == 100) {
            cout << "Priority Queue is overflow" << endl;
            return;
        }
        data[size] = x;
        priority[size] = p;
        size++;
        cout<<"Element inserted successfully" << endl;
    }
    void dequeue() {
        if(size == 0) {
            cout << "Priority Queue is underflow" << endl;
            return;
        }
        int pos = 0;
        for(int i = 1; i < size; i++) {
            if(priority[i] > priority[pos]) {
                pos = i;
            }
        }
        cout<<"Deleted element is: "<<data[pos]<<"priority is: "<<priority[pos]<<endl;
         for(int i = pos; i < size - 1; i++) {
                data[i] = data[i + 1];
                priority[i] = priority[i + 1];
          }
        size--;
    }
    void display() {
        if(size == 0) {
            cout << "Priority Queue is empty" << endl;
            return;
        }
        cout<<"\nElement\tPriority\n";
        for(int i = 0; i < size; i++) {
            cout<<data[i]<<"\t"<<priority[i]<<endl;
        }
    }
};
int main() {
    priorityQueue pq;
    int x,p;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter element: ";
        cin>>x;
        cout<<"Enter priority: ";
        cin>>p;
        pq.enqueue(x,p);
    }
    pq.display();
    pq.dequeue();
    pq.display();
    return 0;
}