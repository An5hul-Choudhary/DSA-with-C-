#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr{10,1,7,6,14,9};
    int n= arr.size();


// Bubble sort
    for(int round=1; round<n; round++){
        bool swapped=false;
        for(int j=0; j<n-round;j++){
            if(arr[j]>arr[j+1]){
            swapped=true;
            swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==false){
            break;
        }
    }
    

//Printing
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}