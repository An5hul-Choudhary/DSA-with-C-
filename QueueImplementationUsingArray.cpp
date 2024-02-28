#include<iostream>

using namespace std;

class queue{

    public:
    int* arr;
    int size;
    int front;
    int rear;

    queue(int size){
        front=0;
        rear =0;
        this->size = size;
        arr = new int[size];
    }

    void push(int data){
        if(rear == size){
            cout << " Queue Overloading";
            return;
        }
        else{
            
            arr[rear] = data;
            rear++;

        }
    }

    void pop(){
        if(rear == front){
            cout<< " Queue is empty";
            return;
        }
        else{
            arr[front] = -1; 
            front++;
            if(front == rear){
                front=0;
                rear =0;
            }
        }
    }

    int getFront(){
        if(front == rear){
            cout<< " Queue is empty";
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize(){
        return rear - front;

    }

};

int main(){

    queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<< "Size of Queue is : "<< q.getSize() << endl;
    cout<< "Front Element is "<< q.getFront()<< endl;

    q.pop();

    cout<< "Size of Queue is : "<< q.getSize() << endl;
    cout<< "Front Element is "<< q.getFront()<< endl;


    q.pop();

    cout<< "Size of Queue is : "<< q.getSize() << endl;
    cout<< "Front Element is "<< q.getFront()<< endl;

    // q.pop();

    // cout<< "Size of Queue is : "<< q.getSize() << endl;
    // cout<< "Front Element is "<< q.getFront()<< endl;

    // q.pop();

    // cout<< "Size of Queue is : "<< q.getSize() << endl;
    // cout<< "Front Element is "<< q.getFront()<< endl;

    // q.pop();

    // cout<< "Size of Queue is : "<< q.getSize() << endl;
    // cout<< "Front Element is "<< q.getFront()<< endl;


    


    if(q.isEmpty()){
        cout<< "Queue is empty "<< endl;
    }
    else{
        cout<< "Queue is not empty "<< endl;
    }



    return 0;
}