/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ 
    int n;
    cin>> n;
    
    for(int row=0; row<n; row++){
        
        // Starting Spaces 
        for(int col=0;col<(n-row-1);col++){
            cout<< " ";
        }
        
        // First Half Pyramid 
        int start=row+1;
        for(int col1=0;col1<row+1;col1++){
            cout<<start;
            start++;
       }
       
       // Second Half Pyramid
       int start1=2*row+1;
       for(int col2=0;col2<row;col2++){
           start1--;
           cout<<start1;
       }
       
        cout<< endl;
    }
    return 0;
}
