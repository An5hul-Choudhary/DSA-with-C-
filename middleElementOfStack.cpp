#include <iostream>
#include <stack>

using namespace std;

void middleElement(stack<int> &s, int &totalSize)
{

    // empty 
    if(s.size()==0){
        cout<< " stack is empty "<< endl;
        return;
    }

    // Base Case
    if (s.size() == ((totalSize / 2) + 1))
    {
        cout<< "Middle element is: " << s.top()<< endl;
        return;
    }

    int temp = s.top();
    s.pop();

    middleElement(s, totalSize);

    s.push(temp);

    
}

int main()
{

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    int totalsize = s.size();

    middleElement(s, totalsize); 

    return 0;
}