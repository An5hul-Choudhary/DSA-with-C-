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
        
        for(int col=0;col<n-row-1;col++){
            cout<< "-";
        }
        
        for(int col1=0; col1<2*row+1; col1++){
            if(col1==0 || col1==2*row){
                cout<< "*";
            }
            else{
                cout<<" ";
            }
        }
    
       
        cout<< endl;
    }
    
    for(int row=0; row<n; row++){
        
        // Starting Spaces 
        
        for(int col=0;col<row;col++){
            cout<< "-";
        }
        
        for(int col1=0; col1<2*(n-row)-1; col1++){
            if(col1==0 || col1==2*(n-row-1)){
                cout<< "*";
            }
            else{
                cout<<" ";
            }
        }
    
       
        cout<< endl;
    }
    return 0;
}
