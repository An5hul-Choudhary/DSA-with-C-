#include <iostream>

using namespace std;


 class stack{

    public:
    int* arr;
    int size;
    int top1;
    int top2;

    stack(int size){
        arr = new int[size];
        this->size= size;
        top1= -1;
        top2 = size;
    }

    void push1(int data){

        if(top2 - top1 == 1){
            cout<< " Stack overflow"<< endl;
        }
        else{
            top1++;
            arr[top1]=data;
        }

    }

    void pop1(){

        if(top1 == -1){
            cout<< " Stack one underflow"<< endl;
        }
        else{
            arr[top1]=0;
            top1--;
        }

    }

    void push2(int data){

        if(top2 - top1 == 1){
            cout<< " Stack two overflow"<< endl;
        }
        else{
            top2--;
            arr[top2]=data;
        }

    }

    void pop2(){

        if(top2 == size){
            cout<< " Stack underflow"<< endl;
        }
        else{
            arr[top2]=0;
            top2++;
        }

    }

 };


int main()
{
   stack s(10);

   s.push1(10);
   s.push1(20);
   s.push1(30);
   s.push1(40);
   s.push1(50);

   s.push2(101);
   s.push2(201);
   s.push2(301);
   s.push2(401);
   s.push2(501);
   
   while(!(s.top1==-1 || s.top2 == 10)){
    
    cout<< s.arr[s.top1] << endl;
    cout<< s.arr[s.top2] << endl;
    s.pop1();
    s.pop2();
    
   }



    return 0;
}
