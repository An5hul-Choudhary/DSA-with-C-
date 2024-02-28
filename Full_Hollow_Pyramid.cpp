
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
        
        // Pyramid 1st and last row Stars
        for(int col1=0;col1<(2*row+1);col1++){
            if(row==0 || row == n-1){
            cout <<"*";
            }
            else{
                if(col1==0 ||col1==2*row){
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