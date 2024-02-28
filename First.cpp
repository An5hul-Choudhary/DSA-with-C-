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
    
    for(int row=0;row<n;row++){
        
        if(row==0 || row == n-1){
        for(int col=0;col<n;col++){
            cout<<"*";
        }
        }
        else{
            for(int col=0;col<n;col++){
                if(col==0 || col ==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    
    }

    return 0;
}
