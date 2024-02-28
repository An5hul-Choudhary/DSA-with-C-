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
        for(int col=0;col<row;col++){
            cout<< " ";
        }
        
        
    
       for(int col2=0;col2<2*n-2*row-1;col2++){
           //for fisrt and last row
           if(row==0 || row == n-1){
               cout<<"*";
           }
           else{
               if(col2==0 || col2==2*(n-row-1)){
                   cout<<"*";
               }
               else{
                   cout<<" ";
               }
           }
       }
       
        cout<< endl;
    }
    return 0;
}
