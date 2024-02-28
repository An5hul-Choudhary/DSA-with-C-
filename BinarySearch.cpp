/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> vec, int target, int size){
    int s=0;
    int e= size-1;
    int mid= s + (e-s)/2;
    
    while(s<=e){
        if(vec[mid]==target){
            return mid;
        }
        else if(target< vec[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
         mid= s + (e-s)/2;
    }
    return -1;
}

int main()
{
    std::vector<int> vec{12,14,16,17,19,23,38,49,67,89} ;
    int target=99;
    int size= vec.size();
    
    int output= binarySearch(vec, target, size);
    if(output){
        cout<<"Target found at "<< output;
    }
    

    return 0;
}
