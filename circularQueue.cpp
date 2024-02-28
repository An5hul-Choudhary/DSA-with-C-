#include<iostream>

using namespace std;

class cirQueue{


    public:
    int* arr;
    int size;
    int front;
    int rear;


    cirQueue(int size){

        arr = new int(size);
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int data){

        // Queue is not full
        if( front == 0 && rear == size-1){
            cout<< " Queue is full "<< endl;
        }

        // Single Element
        else if(front == -1){
            front = rear =0;
            arr[rear] = data;

        }

        // Circular Nature
        else if(rear = size -1 && front !=0){
            rear = 0;
            arr[rear] = data;
        }

        else{
            rear++;
            arr[rear]= data;
        }

    }

    void pop(){

        // Empty
        if(front = -1){
            cout<< " Queue is empty"<< endl;
        }

        // Single Element
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        // Circular Nature
        else if(front = size-1){
            front = 0;
        }

        // Normal 
        else{
            front++;
        }


    }

};

int main()
{

    return 0;
    
} 


