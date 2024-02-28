#include<iostream>
#include<vector>

using namespace std;


int leftBinarySearch(vector<int> vec, int target){
    int s=0;
    int e= vec.size();
    int mid = s +(e-s)/2;
    int ans=-1;

    while(s<=e){

        if(target == vec[mid]){
            ans= mid;
            e=mid-1;
        }
        else if(target< vec[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s +(e-s)/2;
    }
 return ans;
}

int main(){
    vector<int> vec{1,2,3,4,7,9,18,39,59,59,59,69};

    int target=59;

    int out = leftBinarySearch(vec, target);

    cout << "ans is. "<< out << endl;
    return 0;
}