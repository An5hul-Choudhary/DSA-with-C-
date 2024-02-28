#include<iostream>
#include<vector>

using namespace std;


int mySqrt(int x) {

        vector <int> vec;
        for (int i = 0; i < x; i++) {
        vec.push_back(i);
        }

    
 

        int s=0;
        int e=x-1;
        int mid= s+(e-s)/2;
        int ans;
        while(s<e){
            if (mid*mid==x){
                return mid;
            }
            if(mid*mid<x){
               ans=mid;
               s=mid+1; 
            }
            else{
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }

        return -1;
        
    }

int main(){
    int x=4;
    cout<<mySqrt(x);

    return 0;
}
