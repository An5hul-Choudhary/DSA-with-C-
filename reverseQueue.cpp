#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void InsertInStack(queue<int> &q){
    
    stack<int> s;
    
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);

    }

    while(!s.empty()){

        int temp = s.top();
         s.pop();
        q.push(temp);

       
    }

}



int main(){

    queue<int> q;
    
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);



    InsertInStack(q);
    

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}