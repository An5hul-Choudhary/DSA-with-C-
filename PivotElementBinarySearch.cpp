/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


// Finding Pivot element

#include <iostream>
#include<vector> 

using namespace std;

int findPivot(vector<int> vec){
    int s=0;
    int e= vec.size()-1;
    int mid= s+(e-s)/2;
    
    while(s<=e){
        if(vec[mid]<vec[mid-1]){
            return mid-1;
        }
        else if(vec[mid]>vec[mid+1]){
            return mid;
        }
        if(vec[s]>=vec[mid]){
            
             e=mid-1;
        }
        else{
           s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}

int main()
{
    vector<int> vec{1,9,2,3,4,5,6,7,8};
    
    int Pivotaddress = findPivot(vec);
    cout<<"Pivot element is at: "<< Pivotaddress;

    return 0;
}
