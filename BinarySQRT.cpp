/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

int squareRootIs(int a){
  
    
    // Binary Search
    
    int s=0;
    int e= a;
    int m= s+(e-s)/2;
    int ans=-1;
    
    while(s<e){
        
        if(m*m==a){
            return m;
        }
        else if(m*m>a){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
         m= s+(e-s)/2;
    }
    
    return ans;
}

int main()
{
    int a;
    cout<<" Enter the number: ";
    cin>>a;
    
    double out= squareRootIs(a);
    
    cout<<"Square root of "<<a<< " is "<<out<< endl;
    
    int precision;
    cout<<"Enter the precision: "<< endl;
    cin>> precision;
    
    double step=0.1;
    for(int i=0; i<precision;i++){
        for(double j=out;j*j<a;j=j+step){
            out=j;
        }
        step= step/10;
    }
    
    cout<<"Final Square root of "<<a<< " is "<<out<< endl;
    
    return 0;
}
