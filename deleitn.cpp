#include<iostream>
#include<vector>

using namespace std;

int deleting(vector<int> arr, int s){
    for(int i=0;i<s;i++){
        if(i+1==arr[i]){
            return arr[i];
        }
        else{
            arr[i]=arr[i+1];
        }
    }
    
}

int main(){

    vector<int> arr{1,2,2,2,3,3,4,5};
    int s= arr.size();

    int spe=deleting(arr,s);
    cout<< spe <<" ";
    return 0;

}