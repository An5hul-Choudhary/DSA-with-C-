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
    cin >> n;
    
    for (int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            if(row==0 || row == n-1){
                cout<< col+1;
            }
             else{
                if(col==0 || col== row){
                    cout<< col+1;
                }
                else{
                    cout<<" ";
                }
             }
        }
        cout<< endl;
    }
    
}
