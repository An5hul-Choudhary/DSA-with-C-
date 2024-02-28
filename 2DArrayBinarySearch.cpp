/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

int BinarySearch(int arr[3][4], int row, int col, int target){
    
    int s=0;
    int e=row*col;
    int mid= s+(e-s)/2;
    
    while(s<=e){
        
        int rowIndex= mid/col;
        int colIndex= mid%col;
        
        if(arr[rowIndex][colIndex]==target){
            cout<<"Element found at "<< rowIndex+1<<" "<< colIndex+1<< endl;
            return true;
            
        }
        if(target<arr[rowIndex][colIndex]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return false;
}

int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row=3;
    int col=4;
    int target=8;
    
    int out= BinarySearch(arr, row, col, target);
    if(out){
    cout<<"Element Found";
    }
    else{
       cout<<"Element Not Found"; 
    }
    return 0;
}
