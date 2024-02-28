/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

int bs(vector<int> vec, int s, int e, int key){
    
    
    
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(vec[mid]==key) return mid;
    
    if(vec[mid]>key){
    return  bs(vec, s, mid-1,key);
    }
    else{
      return  bs(vec,mid+1, e, key);
    }
    
    
}


int main()
{
    std::vector<int> vec{1,2,3,4,6,7,9,11} ;
    int s=0;
    int e = vec.size()-1;
    int key=11;
    
    int ans = bs(vec, s, e, key);
    
    if(bs){
        cout<<"Element is present at index "<< ans ;
    }
    else{
        cout<<"Element is not present";
    }
    
    

    return 0;
}
