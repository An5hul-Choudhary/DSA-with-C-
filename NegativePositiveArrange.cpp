#include<iostream>

using namespace std;


// Dutch National flag algorithm

int main(){

    int arr[6]={1,2,-3,4,-5,6};

    // Two pointer approach

    int low=0;
    int high= 5;

    while(low<=high){
            // if low is already negative
            if(arr[low]<0){
                low++;
            }
            else if(arr[high]>=0){
                high--;
            }
            else{
                swap(arr[low],arr[high]);
            }
        
    }


    for(int i=0;i<6;i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}